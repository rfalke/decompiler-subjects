// addr = 08048280.0
// signature= func(_init, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? _init(???)
{
  (void) call_gmon_start();
  (void) frame_dummy();
  reg_result = __do_global_ctors_aux();
  return reg_result;
}

// addr = 080482d8.0
// signature= func(_start, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? _start(???)
{
  reg_aa = LOAD(InitStackPointer);
  (void) STORE(InitStackPointer, InitValue(initial_value_of_eax));
  (void) STORE(local + 12, 134513560);
  (void) STORE(local + 16, reg_aa);
  (void) STORE(local + 20, &ARG_0);
  (void) STORE(local + 24, 134513676);
  (void) STORE(local + 28, 134513756);
  (void) STORE(local + 32, InitValue(initial_value_of_edx));
  (void) STORE(local + 36, local + 36);
  (void) F_080482a8();
  asm("l.hlt");
  (void) STORE(local + 4, InitValue(initial_value_of_ebx));
  (void) STORE(local + 8, 0);
  (void) STORE(local, &ARG_0);
  (void) F_08048306();
  if(LOAD(LOAD(local) + 4842)  !=  0) {
    (void) F_080482c8();
  }
  return LOAD(local + 4);
}

// addr = 080482fc.0
// signature= func(call_gmon_start, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? call_gmon_start(???)
{
  (void) F_08048306();
  if(LOAD(InitValue(initial_value_of_ecx) + 4842)  !=  0) {
    (void) F_080482c8();
  }
  return InitValue(initial_value_of_ebx);
}

// addr = 08048306.0
// signature= func(F_08048306, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_08048306(???)
{
  if(LOAD(LOAD(InitStackPointer) + 4842)  !=  0) {
    (void) F_080482c8();
  }
  return ARG_0;
}

// addr = 08048320.0
// signature= func(__do_global_dtors_aux, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? __do_global_dtors_aux(???)
{
  reg_result = InitValue(initial_value_of_eax);
  if(LOAD(&g_0x08049618)  ==  0) {
    while(1) {
      reg_result = g_0x08049614;
      reg_ad = LOAD(reg_result);
      if(LOAD(reg_result)  ==  0) {
        break;
      }
      (void) STORE(&g_0x08049614, reg_result + 4);
      (void) intern_redirectCall(reg_ad);
    }
    (void) STORE(&g_0x08049618, 1);
  }
  return reg_result;
}

// addr = 08048354.0
// signature= func(frame_dummy, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? frame_dummy(???)
{
  reg_result = g_0x08049524;
  if(reg_result  !=  0) {
    reg_result = 0;
    if(reg_result  !=  0) {
      reg_result = intern_redirectCall(reg_result);
    }
  }
  return reg_result;
}

// addr = 0804837c.0
// signature= func(test, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? test(???)
{
  return ARG_1  <=  ARG_0 || ARG_2  <=  ARG_1 ? 0 : 1;
}

// addr = 08048398.0
// signature= func(main, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? main(???)
{
  (void) test();
  (void) F_080482b8();
  (void) test();
  (void) F_080482b8();
  (void) test();
  (void) F_080482b8();
  (void) test();
  (void) F_080482b8();
  return 0;
}

// addr = 0804841a.0
// signature= func(F_0804841a, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_0804841a(???)
{
  reg_ad = LOAD(InitStackPointer);
  (void) _init();
  reg_result = 0;
  (void) STORE(InitValue(initial_value_of_ebp) + -16, reg_result);
  if(!UNDEF) {
    reg_var1 = 0;
    reg_var2 = reg_ad + 4346;
    do {
      reg_result = intern_redirectCall(LOAD(reg_var2));
      reg_var1++;
      reg_var2 += 4;
    } while(reg_var1  <  LOAD(InitValue(initial_value_of_ebp) + -16));
  }
  return reg_result;
}

// addr = 0804845c.0
// signature= func(__libc_csu_fini, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? __libc_csu_fini(???)
{
  return InitValue(initial_value_of_eax);
}

// addr = 08048464.0
// signature= func(__do_global_ctors_aux, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? __do_global_ctors_aux(???)
{
  reg_var2 = g_0x08049514;
  if(reg_var2  !=  -1) {
    reg_var1 = 134518036;
    do {
      (void) intern_redirectCall(reg_var2);
      reg_var2 = LOAD(reg_var1 + -4);
      reg_var1 += -4;
    } while(reg_var2  !=  -1);
  }
  return InitValue(initial_value_of_edx);
}

// addr = 0804848c.0
// signature= func(_fini, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? _fini(???)
{
  (void) F_08048496();
  (void) __do_global_dtors_aux();
  return InitValue(initial_value_of_ebx);
}

// addr = 08048496.0
// signature= func(F_08048496, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_08048496(???)
{
  (void) __do_global_dtors_aux();
  return ARG_0;
}


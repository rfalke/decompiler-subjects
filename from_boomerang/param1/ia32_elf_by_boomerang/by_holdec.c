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
  (void) STORE(local + 12, 134513556);
  (void) STORE(local + 16, reg_aa);
  (void) STORE(local + 20, &ARG_0);
  (void) STORE(local + 24, 134513628);
  (void) STORE(local + 28, 134513708);
  (void) STORE(local + 32, InitValue(initial_value_of_edx));
  (void) STORE(local + 36, local + 36);
  (void) F_080482a8();
  asm("l.hlt");
  (void) STORE(local + 4, InitValue(initial_value_of_ebx));
  (void) STORE(local + 8, 0);
  (void) STORE(local, &ARG_0);
  (void) F_08048306();
  if(LOAD(LOAD(local) + 4714)  !=  0) {
    (void) F_080482c8();
  }
  return LOAD(local + 4);
}

// addr = 080482fc.0
// signature= func(call_gmon_start, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? call_gmon_start(???)
{
  (void) F_08048306();
  if(LOAD(InitValue(initial_value_of_ecx) + 4714)  !=  0) {
    (void) F_080482c8();
  }
  return InitValue(initial_value_of_ebx);
}

// addr = 08048306.0
// signature= func(F_08048306, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_08048306(???)
{
  if(LOAD(LOAD(InitStackPointer) + 4714)  !=  0) {
    (void) F_080482c8();
  }
  return ARG_0;
}

// addr = 08048320.0
// signature= func(__do_global_dtors_aux, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? __do_global_dtors_aux(???)
{
  reg_result = InitValue(initial_value_of_eax);
  if(LOAD(&g_0x08049598)  ==  0) {
    while(1) {
      reg_result = g_0x08049594;
      reg_ad = LOAD(reg_result);
      if(LOAD(reg_result)  ==  0) {
        break;
      }
      (void) STORE(&g_0x08049594, reg_result + 4);
      (void) intern_redirectCall(reg_ad);
    }
    (void) STORE(&g_0x08049598, 1);
  }
  return reg_result;
}

// addr = 08048354.0
// signature= func(frame_dummy, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? frame_dummy(???)
{
  reg_result = g_0x080494a4;
  if(reg_result  !=  0) {
    reg_result = 0;
    if(reg_result  !=  0) {
      reg_result = intern_redirectCall(reg_result);
    }
  }
  return reg_result;
}

// addr = 0804837c.0
// signature= func(cparam, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? cparam(???)
{
  if(ARG_0  signed  0) {
    (void) STORE(&ARG_1, 0);
  }
  return ARG_0 + ARG_1;
}

// addr = 08048394.0
// signature= func(main, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? main(???)
{
  reg_aa = ARG_0;
  (void) STORE(InitStackPointer + -32, 2);
  (void) STORE(InitStackPointer + -36, reg_aa + -3);
  reg_ab = cparam();
  (void) STORE(InitStackPointer + -40, reg_ab);
  (void) STORE(InitStackPointer + -44, 134513792);
  (void) F_080482b8();
  return 0;
}

// addr = 080483ea.0
// signature= func(F_080483ea, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_080483ea(???)
{
  reg_ad = LOAD(InitStackPointer);
  (void) _init();
  reg_result = 0;
  (void) STORE(InitValue(initial_value_of_ebp) + -16, reg_result);
  if(!UNDEF) {
    reg_var1 = 0;
    reg_var2 = reg_ad + 4266;
    do {
      reg_result = intern_redirectCall(LOAD(reg_var2));
      reg_var1++;
      reg_var2 += 4;
    } while(reg_var1  <  LOAD(InitValue(initial_value_of_ebp) + -16));
  }
  return reg_result;
}

// addr = 0804842c.0
// signature= func(__libc_csu_fini, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? __libc_csu_fini(???)
{
  return InitValue(initial_value_of_eax);
}

// addr = 08048434.0
// signature= func(__do_global_ctors_aux, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? __do_global_ctors_aux(???)
{
  reg_var2 = g_0x08049494;
  if(reg_var2  !=  -1) {
    reg_var1 = 134517908;
    do {
      (void) intern_redirectCall(reg_var2);
      reg_var2 = LOAD(reg_var1 + -4);
      reg_var1 += -4;
    } while(reg_var2  !=  -1);
  }
  return InitValue(initial_value_of_edx);
}

// addr = 0804845c.0
// signature= func(_fini, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? _fini(???)
{
  (void) F_08048466();
  (void) __do_global_dtors_aux();
  return InitValue(initial_value_of_ebx);
}

// addr = 08048466.0
// signature= func(F_08048466, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_08048466(???)
{
  (void) __do_global_dtors_aux();
  return ARG_0;
}


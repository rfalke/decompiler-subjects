// addr = 0804829c.0
// signature= func(_init, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? _init(???)
{
  (void) call_gmon_start();
  (void) frame_dummy();
  reg_result = __do_global_ctors_aux();
  return reg_result;
}

// addr = 080482f4.0
// signature= func(_start, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? _start(???)
{
  reg_aa = LOAD(InitStackPointer);
  (void) STORE(InitStackPointer, InitValue(initial_value_of_eax));
  (void) STORE(local + 12, reg_aa);
  (void) STORE(local + 16, &ARG_0);
  (void) STORE(local + 20, 134513764);
  (void) STORE(local + 24, 134513848);
  (void) STORE(local + 28, InitValue(initial_value_of_edx));
  (void) STORE(local + 32, local + 32);
  (void) STORE(local + 8, 134513653);
  (void) F_080482d4();
  asm("l.hlt");
  (void) STORE(local + 4, 0);
  (void) STORE(local, InitValue(initial_value_of_ebx));
  (void) F_08048321();
  reg_ab = LOAD(local);
  (void) STORE(local, InitValue(initial_value_of_edx));
  if(LOAD(reg_ab + 4911)  !=  0) {
    (void) intern_redirectCall(LOAD(reg_ab + 4911));
  }
  return LOAD(local);
}

// addr = 08048318.0
// signature= func(call_gmon_start, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? call_gmon_start(???)
{
  (void) F_08048321();
  if(LOAD(InitValue(initial_value_of_ebx) + 4911)  !=  0) {
    (void) intern_redirectCall(LOAD(InitValue(initial_value_of_ebx) + 4911));
  }
  return InitValue(initial_value_of_edx);
}

// addr = 08048321.0
// signature= func(F_08048321, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_08048321(???)
{
  reg_aa = LOAD(InitStackPointer);
  (void) STORE(InitStackPointer, InitValue(initial_value_of_edx));
  if(LOAD(reg_aa + 4911)  !=  0) {
    (void) intern_redirectCall(LOAD(reg_aa + 4911));
  }
  return LOAD(InitStackPointer);
}

// addr = 0804833c.0
// signature= func(__do_global_dtors_aux, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? __do_global_dtors_aux(???)
{
  reg_result = InitValue(initial_value_of_eax);
  if(LOAD(&g_0x08049678)  ==  0) {
    while(1) {
      reg_result = g_0x08049674;
      reg_ad = LOAD(reg_result);
      if(LOAD(reg_result)  ==  0) {
        break;
      }
      (void) STORE(&g_0x08049674, reg_result + 4);
      (void) intern_redirectCall(reg_ad);
    }
    (void) STORE(&g_0x08049678, 1);
  }
  return reg_result;
}

// addr = 08048370.0
// signature= func(frame_dummy, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? frame_dummy(???)
{
  reg_result = g_0x08049584;
  if(reg_result  !=  0) {
    reg_result = 0;
    if(reg_result  !=  0) {
      reg_result = intern_redirectCall(reg_result);
    }
  }
  return reg_result;
}

// addr = 080483f5.0
// signature= func(main, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? main(???)
{
  (void) STORE(local + 44, InitValue(initial_value_of_ebp));
  (void) STORE(InitStackPointer + -60, 134513988);
  (void) F_080482e4();
  (void) STORE(InitStackPointer + -56, local + 40);
  (void) STORE(InitStackPointer + -60, 134514003);
  (void) F_080482c4();
  (void) STORE(InitStackPointer + -56, LOAD(local + 40));
  (void) STORE(InitStackPointer + -60, local + 28);
  (void) twofib();
  (void) STORE(InitStackPointer + -56, LOAD(local + 28));
  (void) STORE(InitStackPointer + -60, LOAD(local + 40));
  (void) STORE(InitStackPointer + -64, 134514006);
  (void) F_080482e4();
  return 0;
}

// addr = 08048472.0
// signature= func(F_08048472, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_08048472(???)
{
  reg_ae = LOAD(InitStackPointer);
  (void) _init();
  reg_var1 = 0;
  reg_result = 0;
  (void) STORE(InitValue(initial_value_of_ebp) + -16, reg_ae + 4354);
  if(reg_var1  <  reg_result) {
    do {
      reg_result = intern_redirectCall(LOAD(reg_var1 * 4 + reg_ae + 4354));
      reg_var1++;
    } while(reg_var1  <  (LOAD(InitValue(initial_value_of_ebp) + -16) + reg_ae * -1 + -4354) / 4);
  }
  return reg_result;
}

// addr = 080484b8.0
// signature= func(__libc_csu_fini, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? __libc_csu_fini(???)
{
  (void) F_080484c3();
  reg_var1 = -1;
  while(reg_var1  !=  -1) {
    (void) intern_redirectCall(LOAD(InitValue(initial_value_of_ebx) + reg_var1 * 4 + 4273));
    reg_var1--;
  }
  reg_result = _fini();
  return reg_result;
}

// addr = 080484c3.0
// signature= func(F_080484c3, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_080484c3(???)
{
  reg_af = LOAD(InitStackPointer);
  reg_var1 = -1;
  while(reg_var1  !=  -1) {
    (void) intern_redirectCall(LOAD(reg_var1 * 4 + reg_af + 4273));
    reg_var1--;
  }
  reg_result = _fini();
  return reg_result;
}

// addr = 080484fc.0
// signature= func(__do_global_ctors_aux, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? __do_global_ctors_aux(???)
{
  reg_var1 = 134518132;
  reg_var2 = g_0x08049574;
  while(reg_var2  !=  -1) {
    reg_var1 += -4;
    (void) intern_redirectCall(reg_var2);
    reg_var2 = LOAD(reg_var1);
  }
  return InitValue(initial_value_of_edx);
}

// addr = 08048520.0
// signature= func(_fini, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? _fini(???)
{
  (void) F_08048529();
  reg_result = __do_global_dtors_aux();
  return reg_result;
}

// addr = 08048529.0
// signature= func(F_08048529, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_08048529(???)
{
  (void) STORE(InitStackPointer, InitValue(initial_value_of_eax));
  reg_result = __do_global_dtors_aux();
  return reg_result;
}


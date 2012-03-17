// addr = 08048278.0
// signature= func(_init, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? _init(???)
{
  (void) call_gmon_start();
  (void) frame_dummy();
  reg_result = __do_global_ctors_aux();
  return reg_result;
}

// addr = 080482c0.0
// signature= func(_start, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? _start(???)
{
  reg_aa = LOAD(InitStackPointer);
  (void) STORE(InitStackPointer, InitValue(initial_value_of_eax));
  (void) STORE(local + 12, reg_aa);
  (void) STORE(local + 16, &ARG_0);
  (void) STORE(local + 20, 134513612);
  (void) STORE(local + 24, 134513696);
  (void) STORE(local + 28, InitValue(initial_value_of_edx));
  (void) STORE(local + 32, local + 32);
  (void) STORE(local + 8, 134513512);
  (void) F_080482a0();
  asm("l.hlt");
  (void) STORE(local + 4, 0);
  (void) STORE(local, InitValue(initial_value_of_ebx));
  (void) F_080482ed();
  reg_ab = LOAD(local);
  (void) STORE(local, InitValue(initial_value_of_edx));
  if(LOAD(reg_ab + 4779)  !=  0) {
    (void) intern_redirectCall(LOAD(reg_ab + 4779));
  }
  return LOAD(local);
}

// addr = 080482e4.0
// signature= func(call_gmon_start, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? call_gmon_start(???)
{
  (void) F_080482ed();
  if(LOAD(InitValue(initial_value_of_ebx) + 4779)  !=  0) {
    (void) intern_redirectCall(LOAD(InitValue(initial_value_of_ebx) + 4779));
  }
  return InitValue(initial_value_of_edx);
}

// addr = 080482ed.0
// signature= func(F_080482ed, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_080482ed(???)
{
  reg_aa = LOAD(InitStackPointer);
  (void) STORE(InitStackPointer, InitValue(initial_value_of_edx));
  if(LOAD(reg_aa + 4779)  !=  0) {
    (void) intern_redirectCall(LOAD(reg_aa + 4779));
  }
  return LOAD(InitStackPointer);
}

// addr = 08048308.0
// signature= func(__do_global_dtors_aux, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? __do_global_dtors_aux(???)
{
  reg_result = InitValue(initial_value_of_eax);
  if(LOAD(&g_0x080495c4)  ==  0) {
    while(1) {
      reg_result = g_0x080495b8;
      reg_ad = LOAD(reg_result);
      if(LOAD(reg_result)  ==  0) {
        break;
      }
      (void) STORE(&g_0x080495b8, reg_result + 4);
      (void) intern_redirectCall(reg_ad);
    }
    (void) STORE(&g_0x080495c4, 1);
  }
  return reg_result;
}

// addr = 0804833c.0
// signature= func(frame_dummy, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? frame_dummy(???)
{
  reg_result = g_0x080494cc;
  if(reg_result  !=  0) {
    reg_result = 0;
    if(reg_result  !=  0) {
      reg_result = intern_redirectCall(reg_result);
    }
  }
  return reg_result;
}

// addr = 080483da.0
// signature= func(F_080483da, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_080483da(???)
{
  reg_ae = LOAD(InitStackPointer);
  (void) _init();
  reg_var1 = 0;
  reg_result = 0;
  (void) STORE(InitValue(initial_value_of_ebp) + -16, reg_ae + 4322);
  if(reg_var1  <  reg_result) {
    do {
      reg_result = intern_redirectCall(LOAD(reg_var1 * 4 + reg_ae + 4322));
      reg_var1++;
    } while(reg_var1  <  (LOAD(InitValue(initial_value_of_ebp) + -16) + reg_ae * -1 + -4322) / 4);
  }
  return reg_result;
}

// addr = 08048420.0
// signature= func(__libc_csu_fini, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? __libc_csu_fini(???)
{
  (void) F_0804842b();
  reg_var1 = -1;
  while(reg_var1  !=  -1) {
    (void) intern_redirectCall(LOAD(InitValue(initial_value_of_ebx) + reg_var1 * 4 + 4241));
    reg_var1--;
  }
  reg_result = _fini();
  return reg_result;
}

// addr = 0804842b.0
// signature= func(F_0804842b, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_0804842b(???)
{
  reg_af = LOAD(InitStackPointer);
  reg_var1 = -1;
  while(reg_var1  !=  -1) {
    (void) intern_redirectCall(LOAD(reg_var1 * 4 + reg_af + 4241));
    reg_var1--;
  }
  reg_result = _fini();
  return reg_result;
}

// addr = 08048464.0
// signature= func(__do_global_ctors_aux, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? __do_global_ctors_aux(???)
{
  reg_var1 = 134517948;
  reg_var2 = g_0x080494bc;
  while(reg_var2  !=  -1) {
    reg_var1 += -4;
    (void) intern_redirectCall(reg_var2);
    reg_var2 = LOAD(reg_var1);
  }
  return InitValue(initial_value_of_edx);
}

// addr = 08048488.0
// signature= func(_fini, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? _fini(???)
{
  (void) F_08048491();
  reg_result = __do_global_dtors_aux();
  return reg_result;
}

// addr = 08048491.0
// signature= func(F_08048491, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_08048491(???)
{
  (void) STORE(InitStackPointer, InitValue(initial_value_of_eax));
  reg_result = __do_global_dtors_aux();
  return reg_result;
}


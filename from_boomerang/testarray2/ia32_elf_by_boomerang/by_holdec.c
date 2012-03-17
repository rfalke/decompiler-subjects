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
  (void) STORE(local + 20, 134513720);
  (void) STORE(local + 24, 134513804);
  (void) STORE(local + 28, InitValue(initial_value_of_edx));
  (void) STORE(local + 32, local + 32);
  (void) STORE(local + 8, 134513580);
  (void) F_080482a0();
  asm("l.hlt");
  (void) STORE(local + 4, 0);
  (void) STORE(local, InitValue(initial_value_of_ebx));
  (void) F_080482ed();
  reg_ab = LOAD(local);
  (void) STORE(local, InitValue(initial_value_of_edx));
  if(LOAD(reg_ab + 4931)  !=  0) {
    (void) intern_redirectCall(LOAD(reg_ab + 4931));
  }
  return LOAD(local);
}

// addr = 080482e4.0
// signature= func(call_gmon_start, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? call_gmon_start(???)
{
  (void) F_080482ed();
  if(LOAD(InitValue(initial_value_of_ebx) + 4931)  !=  0) {
    (void) intern_redirectCall(LOAD(InitValue(initial_value_of_ebx) + 4931));
  }
  return InitValue(initial_value_of_edx);
}

// addr = 080482ed.0
// signature= func(F_080482ed, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_080482ed(???)
{
  reg_aa = LOAD(InitStackPointer);
  (void) STORE(InitStackPointer, InitValue(initial_value_of_edx));
  if(LOAD(reg_aa + 4931)  !=  0) {
    (void) intern_redirectCall(LOAD(reg_aa + 4931));
  }
  return LOAD(InitStackPointer);
}

// addr = 08048308.0
// signature= func(__do_global_dtors_aux, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? __do_global_dtors_aux(???)
{
  reg_result = InitValue(initial_value_of_eax);
  if(LOAD(&g_0x0804965c)  ==  0) {
    while(1) {
      reg_result = g_0x08049650;
      reg_ad = LOAD(reg_result);
      if(LOAD(reg_result)  ==  0) {
        break;
      }
      (void) STORE(&g_0x08049650, reg_result + 4);
      (void) intern_redirectCall(reg_ad);
    }
    (void) STORE(&g_0x0804965c, 1);
  }
  return reg_result;
}

// addr = 0804833c.0
// signature= func(frame_dummy, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? frame_dummy(???)
{
  reg_result = g_0x08049564;
  if(reg_result  !=  0) {
    reg_result = 0;
    if(reg_result  !=  0) {
      reg_result = intern_redirectCall(reg_result);
    }
  }
  return reg_result;
}

// addr = 08048368.0
// signature= func(mid, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? mid(???)
{
  reg_result = F_080482b0();
  return reg_result;
}

// addr = 0804838a.0
// signature= func(fst, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? fst(???)
{
  reg_result = F_080482b0();
  return reg_result;
}

// addr = 08048446.0
// signature= func(F_08048446, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_08048446(???)
{
  reg_ae = LOAD(InitStackPointer);
  (void) _init();
  reg_var1 = 0;
  reg_result = 0;
  (void) STORE(InitValue(initial_value_of_ebp) + -16, reg_ae + 4366);
  if(reg_var1  <  reg_result) {
    do {
      reg_result = intern_redirectCall(LOAD(reg_var1 * 4 + reg_ae + 4366));
      reg_var1++;
    } while(reg_var1  <  (LOAD(InitValue(initial_value_of_ebp) + -16) + reg_ae * -1 + -4366) / 4);
  }
  return reg_result;
}

// addr = 0804848c.0
// signature= func(__libc_csu_fini, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? __libc_csu_fini(???)
{
  (void) F_08048497();
  reg_var1 = -1;
  while(reg_var1  !=  -1) {
    (void) intern_redirectCall(LOAD(InitValue(initial_value_of_ebx) + reg_var1 * 4 + 4285));
    reg_var1--;
  }
  reg_result = _fini();
  return reg_result;
}

// addr = 08048497.0
// signature= func(F_08048497, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_08048497(???)
{
  reg_af = LOAD(InitStackPointer);
  reg_var1 = -1;
  while(reg_var1  !=  -1) {
    (void) intern_redirectCall(LOAD(reg_var1 * 4 + reg_af + 4285));
    reg_var1--;
  }
  reg_result = _fini();
  return reg_result;
}

// addr = 080484d0.0
// signature= func(__do_global_ctors_aux, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? __do_global_ctors_aux(???)
{
  reg_var1 = 134518100;
  reg_var2 = g_0x08049554;
  while(reg_var2  !=  -1) {
    reg_var1 += -4;
    (void) intern_redirectCall(reg_var2);
    reg_var2 = LOAD(reg_var1);
  }
  return InitValue(initial_value_of_edx);
}

// addr = 080484f4.0
// signature= func(_fini, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? _fini(???)
{
  (void) F_080484fd();
  reg_result = __do_global_dtors_aux();
  return reg_result;
}

// addr = 080484fd.0
// signature= func(F_080484fd, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_080484fd(???)
{
  (void) STORE(InitStackPointer, InitValue(initial_value_of_eax));
  reg_result = __do_global_dtors_aux();
  return reg_result;
}


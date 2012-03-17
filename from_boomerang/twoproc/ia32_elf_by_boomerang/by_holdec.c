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
  (void) STORE(local + 20, 134513584);
  (void) STORE(local + 24, 134513668);
  (void) STORE(local + 28, InitValue(initial_value_of_edx));
  (void) STORE(local + 32, local + 32);
  (void) STORE(local + 8, 134513525);
  (void) F_080482a0();
  asm("l.hlt");
  (void) STORE(local + 4, 0);
  (void) STORE(local, InitValue(initial_value_of_ebx));
  (void) F_080482ed();
  reg_ab = LOAD(local);
  (void) STORE(local, InitValue(initial_value_of_edx));
  if(LOAD(reg_ab + 4743)  !=  0) {
    (void) intern_redirectCall(LOAD(reg_ab + 4743));
  }
  return LOAD(local);
}

// addr = 080482e4.0
// signature= func(call_gmon_start, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? call_gmon_start(???)
{
  (void) F_080482ed();
  if(LOAD(InitValue(initial_value_of_ebx) + 4743)  !=  0) {
    (void) intern_redirectCall(LOAD(InitValue(initial_value_of_ebx) + 4743));
  }
  return InitValue(initial_value_of_edx);
}

// addr = 080482ed.0
// signature= func(F_080482ed, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_080482ed(???)
{
  reg_aa = LOAD(InitStackPointer);
  (void) STORE(InitStackPointer, InitValue(initial_value_of_edx));
  if(LOAD(reg_aa + 4743)  !=  0) {
    (void) intern_redirectCall(LOAD(reg_aa + 4743));
  }
  return LOAD(InitStackPointer);
}

// addr = 08048308.0
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

// addr = 0804833c.0
// signature= func(frame_dummy, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? frame_dummy(???)
{
  reg_result = g_0x080494a8;
  if(reg_result  !=  0) {
    reg_result = 0;
    if(reg_result  !=  0) {
      reg_result = intern_redirectCall(reg_result);
    }
  }
  return reg_result;
}

// addr = 08048368.0
// signature= func(proc1, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? proc1(???)
{
  return ARG_1 * -1 + ARG_0;
}

// addr = 08048375.0
// signature= func(main, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? main(???)
{
  (void) STORE(InitStackPointer + -40, 4);
  (void) STORE(InitStackPointer + -44, 11);
  reg_ab = proc1();
  (void) STORE(InitStackPointer + -40, reg_ab);
  (void) STORE(InitStackPointer + -44, 134513808);
  reg_result = F_080482b0();
  return reg_result;
}

// addr = 080483be.0
// signature= func(F_080483be, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_080483be(???)
{
  reg_ae = LOAD(InitStackPointer);
  (void) _init();
  reg_var1 = 0;
  reg_result = 0;
  (void) STORE(InitValue(initial_value_of_ebp) + -16, reg_ae + 4314);
  if(reg_var1  <  reg_result) {
    do {
      reg_result = intern_redirectCall(LOAD(reg_var1 * 4 + reg_ae + 4314));
      reg_var1++;
    } while(reg_var1  <  (LOAD(InitValue(initial_value_of_ebp) + -16) + reg_ae * -1 + -4314) / 4);
  }
  return reg_result;
}

// addr = 08048404.0
// signature= func(__libc_csu_fini, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? __libc_csu_fini(???)
{
  (void) F_0804840f();
  reg_var1 = -1;
  while(reg_var1  !=  -1) {
    (void) intern_redirectCall(LOAD(InitValue(initial_value_of_ebx) + reg_var1 * 4 + 4233));
    reg_var1--;
  }
  reg_result = _fini();
  return reg_result;
}

// addr = 0804840f.0
// signature= func(F_0804840f, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_0804840f(???)
{
  reg_af = LOAD(InitStackPointer);
  reg_var1 = -1;
  while(reg_var1  !=  -1) {
    (void) intern_redirectCall(LOAD(reg_var1 * 4 + reg_af + 4233));
    reg_var1--;
  }
  reg_result = _fini();
  return reg_result;
}

// addr = 08048448.0
// signature= func(__do_global_ctors_aux, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? __do_global_ctors_aux(???)
{
  reg_var1 = 134517912;
  reg_var2 = g_0x08049498;
  while(reg_var2  !=  -1) {
    reg_var1 += -4;
    (void) intern_redirectCall(reg_var2);
    reg_var2 = LOAD(reg_var1);
  }
  return InitValue(initial_value_of_edx);
}

// addr = 0804846c.0
// signature= func(_fini, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? _fini(???)
{
  (void) F_08048475();
  reg_result = __do_global_dtors_aux();
  return reg_result;
}

// addr = 08048475.0
// signature= func(F_08048475, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_08048475(???)
{
  (void) STORE(InitStackPointer, InitValue(initial_value_of_eax));
  reg_result = __do_global_dtors_aux();
  return reg_result;
}


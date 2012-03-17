// addr = 080482c8.0
// signature= func(_init, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? _init(???)
{
  (void) call_gmon_start();
  (void) frame_dummy();
  reg_result = __do_global_ctors_aux();
  return reg_result;
}

// addr = 08048340.0
// signature= func(_start, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? _start(???)
{
  reg_aa = LOAD(InitStackPointer);
  (void) STORE(InitStackPointer, InitValue(initial_value_of_eax));
  (void) STORE(local + 12, 134513636);
  (void) STORE(local + 16, reg_aa);
  (void) STORE(local + 20, &ARG_0);
  (void) STORE(local + 24, 134513948);
  (void) STORE(local + 28, 134514028);
  (void) STORE(local + 32, InitValue(initial_value_of_edx));
  (void) STORE(local + 36, local + 36);
  (void) F_08048310();
  asm("l.hlt");
  (void) STORE(local + 4, InitValue(initial_value_of_ebx));
  (void) STORE(local + 8, 0);
  (void) STORE(local, &ARG_0);
  (void) F_0804836e();
  if(LOAD(LOAD(local) + 4998)  !=  0) {
    (void) F_08048330();
  }
  return LOAD(local + 4);
}

// addr = 08048364.0
// signature= func(call_gmon_start, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? call_gmon_start(???)
{
  (void) F_0804836e();
  if(LOAD(InitValue(initial_value_of_ecx) + 4998)  !=  0) {
    (void) F_08048330();
  }
  return InitValue(initial_value_of_ebx);
}

// addr = 0804836e.0
// signature= func(F_0804836e, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_0804836e(???)
{
  if(LOAD(LOAD(InitStackPointer) + 4998)  !=  0) {
    (void) F_08048330();
  }
  return ARG_0;
}

// addr = 08048388.0
// signature= func(__do_global_dtors_aux, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? __do_global_dtors_aux(???)
{
  reg_result = InitValue(initial_value_of_eax);
  if(LOAD(&g_0x08049724)  ==  0) {
    while(1) {
      reg_result = g_0x08049720;
      reg_ad = LOAD(reg_result);
      if(LOAD(reg_result)  ==  0) {
        break;
      }
      (void) STORE(&g_0x08049720, reg_result + 4);
      (void) intern_redirectCall(reg_ad);
    }
    (void) STORE(&g_0x08049724, 1);
  }
  return reg_result;
}

// addr = 080483bc.0
// signature= func(frame_dummy, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? frame_dummy(???)
{
  reg_result = g_0x08049628;
  if(reg_result  !=  0) {
    reg_result = 0;
    if(reg_result  !=  0) {
      reg_result = intern_redirectCall(reg_result);
    }
  }
  return reg_result;
}

// addr = 080483e4.0
// signature= func(main, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? main(???)
{
  (void) STORE(local + 36, 1084227584);
  (void) STORE(local + 40, InitValue(initial_value_of_ebp));
  (void) STORE(InitStackPointer + -56, local + 32);
  (void) STORE(InitStackPointer + -60, 134514112);
  (void) F_08048300();
  asm("l.fld ss:[ebp-0x8]");
  asm("l.fld ss:[ebp-0x4]");
  asm("l.fxch st,st(1)");
  asm("l.fstpq ss:[esp]");
  asm("l.fstpq ss:[esp]");
  (void) STORE(InitStackPointer + -76, 134514115);
  reg_ac = F_08048320();
  asm("l.fld ss:[ebp-0x8]");
  asm("l.fld ss:[ebp-0x4]");
  asm("l.fucompp");
  asm("l.fstsw ax");
  reg_var1 = NARROW(reg_ac / 256) & 69;
  if(reg_var1  ==  64) {
    (void) STORE(InitStackPointer + -60, 134514133);
    reg_ar = F_080482f0();
    reg_var1 = NARROW(reg_ar / 256);
  }
  asm("l.fld ss:[ebp-0x8]");
  asm("l.fld ss:[ebp-0x4]");
  asm("l.fucompp");
  asm("l.fstsw ax");
  reg_var2 = reg_var1 & 69 ^ 64;
  if(reg_var2  !=  0) {
    (void) STORE(InitStackPointer + -60, 134514139);
    reg_aq = F_080482f0();
    reg_var2 = NARROW(reg_aq / 256);
  }
  asm("l.fld ss:[ebp-0x8]");
  asm("l.fld ss:[ebp-0x4]");
  asm("l.fucompp");
  asm("l.fstsw ax");
  if((reg_var2 & 69)  ==  0) {
    (void) STORE(InitStackPointer + -60, 134514149);
    reg_ao = F_080482f0();
    reg_var2 = NARROW(reg_ao / 256);
  }
  asm("l.fld ss:[ebp-0x8]");
  asm("l.fld ss:[ebp-0x4]");
  asm("l.fxch st,st(1)");
  asm("l.fucompp");
  asm("l.fstsw ax");
  if((reg_var2 & 5)  ==  0) {
    (void) STORE(InitStackPointer + -60, 134514157);
    reg_ab = F_080482f0();
    reg_var2 = NARROW(reg_ab / 256);
  }
  asm("l.fld ss:[ebp-0x8]");
  asm("l.fld ss:[ebp-0x4]");
  asm("l.fucompp");
  asm("l.fstsw ax");
  if((reg_var2 & 5)  ==  0) {
    (void) STORE(InitStackPointer + -60, 134514171);
    reg_aa = F_080482f0();
    reg_var2 = NARROW(reg_aa / 256);
  }
  asm("l.fld ss:[ebp-0x8]");
  asm("l.fld ss:[ebp-0x4]");
  asm("l.fxch st,st(1)");
  asm("l.fucompp");
  asm("l.fstsw ax");
  if((reg_var2 & 69)  ==  0) {
    (void) STORE(InitStackPointer + -60, 134514188);
    (void) F_080482f0();
  }
  return 0;
}

// addr = 0804852a.0
// signature= func(F_0804852a, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_0804852a(???)
{
  reg_ad = LOAD(InitStackPointer);
  (void) _init();
  reg_result = 0;
  (void) STORE(InitValue(initial_value_of_ebp) + -16, reg_result);
  if(!UNDEF) {
    reg_var1 = 0;
    reg_var2 = reg_ad + 4334;
    do {
      reg_result = intern_redirectCall(LOAD(reg_var2));
      reg_var1++;
      reg_var2 += 4;
    } while(reg_var1  <  LOAD(InitValue(initial_value_of_ebp) + -16));
  }
  return reg_result;
}

// addr = 0804856c.0
// signature= func(__libc_csu_fini, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? __libc_csu_fini(???)
{
  return InitValue(initial_value_of_eax);
}

// addr = 08048574.0
// signature= func(__do_global_ctors_aux, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? __do_global_ctors_aux(???)
{
  reg_var2 = g_0x08049618;
  if(reg_var2  !=  -1) {
    reg_var1 = 134518296;
    do {
      (void) intern_redirectCall(reg_var2);
      reg_var2 = LOAD(reg_var1 + -4);
      reg_var1 += -4;
    } while(reg_var2  !=  -1);
  }
  return InitValue(initial_value_of_edx);
}

// addr = 0804859c.0
// signature= func(_fini, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? _fini(???)
{
  (void) F_080485a6();
  (void) __do_global_dtors_aux();
  return InitValue(initial_value_of_ebx);
}

// addr = 080485a6.0
// signature= func(F_080485a6, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_080485a6(???)
{
  (void) __do_global_dtors_aux();
  return ARG_0;
}


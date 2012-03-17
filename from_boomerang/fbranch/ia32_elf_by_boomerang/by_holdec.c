// addr = 08048278.0
// signature= func(_init, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? _init(???)
{
  (void) call_gmon_start();
  (void) frame_dummy();
  reg_result = __do_global_ctors_aux();
  return reg_result;
}

// addr = 080482e0.0
// signature= func(_start, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? _start(???)
{
  reg_ab = LOAD(InitStackPointer);
  (void) STORE(InitStackPointer, InitValue(initial_value_of_eax));
  (void) STORE(local + 12, 134513552);
  (void) STORE(local + 16, reg_ab);
  (void) STORE(local + 20, &ARG_0);
  (void) STORE(local + 24, 134513876);
  (void) STORE(local + 28, 134513924);
  (void) STORE(local + 32, InitValue(initial_value_of_edx));
  (void) STORE(local + 36, local + 36);
  reg_ad = __libc_start_main();
  asm("l.hlt");
  (void) STORE(local + 4, InitValue(initial_value_of_ebx));
  (void) STORE(local + 8, 0);
  (void) STORE(local, reg_ad);
  (void) F_0804830e();
  reg_result = LOAD(LOAD(local) + 5066);
  if(reg_result  !=  0) {
    reg_result = intern_redirectCall(reg_result);
  }
  return reg_result;
}

// addr = 08048304.0
// signature= func(call_gmon_start, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? call_gmon_start(???)
{
  (void) F_0804830e();
  reg_result = LOAD(InitValue(initial_value_of_eax) + 5066);
  if(reg_result  !=  0) {
    reg_result = intern_redirectCall(reg_result);
  }
  return reg_result;
}

// addr = 0804830e.0
// signature= func(F_0804830e, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_0804830e(???)
{
  reg_result = LOAD(LOAD(InitStackPointer) + 5066);
  if(reg_result  !=  0) {
    reg_result = intern_redirectCall(reg_result);
  }
  return reg_result;
}

// addr = 08048328.0
// signature= func(__do_global_dtors_aux, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? __do_global_dtors_aux(???)
{
  reg_result = InitValue(initial_value_of_eax);
  if(LOAD(&g_0x080496dc)  ==  0) {
// addr = 08048364.0
// signature= func(frame_dummy, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? frame_dummy(???)
{
  reg_result = g_0x080496b8;
  if(reg_result  !=  0) {
    reg_result = 0;
    if(reg_result  !=  0) {
      reg_result = F_00000000();
    }
  }
  return reg_result;
}

// addr = 08048390.0
// signature= func(main, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? main(???)
{
  (void) STORE(local + 16, 134514048);
  (void) STORE(local + 20, local + 36);
  (void) STORE(local + 40, InitValue(initial_value_of_ebp));
  reg_ax = scanf();
  asm("l.fld ss:[ebp-0x4]");
  asm("l.fstpq ss:[esp]");
  (void) STORE(local + 12, reg_ax);
  (void) STORE(local + 4, 0);
  (void) STORE(local + 8, 1075052544);
  (void) STORE(local, 134514051);
  reg_ao = printf();
  asm("l.fld ss:[ebp-0x4]");
  asm("l.fld ds:[0x80485cc]");
  asm("l.fxch st,st(1)");
  asm("l.fucom st(1)");
  asm("l.fstsw ax");
  asm("l.fstp st(1)");
  reg_var2 = NARROW(reg_ao / 256) & 69 ^ 64;
  reg_var1 = reg_ao & 0xffff00ff | WIDEN(NARROW(reg_ao / 256) & 69) * 256 & 0xffff00ff | WIDEN(reg_var2) * 256;
  if(reg_var2  ==  0) {
    asm("l.fstp st(0)");
    (void) STORE(local + 16, 134514085);
    reg_var1 = puts();
    reg_var2 = NARROW(reg_var1 / 256);
    asm("l.fld ss:[ebp-0x4]");
  }
  asm("l.fld ds:[0x80485cc]");
  asm("l.fucomp st(1)");
  asm("l.fstsw ax");
  reg_var3 = reg_var2 & 69;
  reg_result = reg_var1 & 0xffff00ff | WIDEN(reg_var3) * 256;
  if(reg_var3  !=  64) {
    asm("l.fstp st(0)");
    (void) STORE(local + 16, 134514113);
    reg_result = puts();
    reg_var3 = NARROW(reg_result / 256);
    asm("l.fld ss:[ebp-0x4]");
  }
  asm("l.fld ds:[0x80485cc]");
  asm("l.fucomp st(1)");
  asm("l.fstsw ax");
  if((reg_var3 & 69)  ==  0) {
    asm("l.fstp st(0)");
    (void) STORE(local + 16, 134514105);
    reg_result = puts();
    reg_var3 = NARROW(reg_result / 256);
    asm("l.fld ss:[ebp-0x4]");
  }
  asm("l.fld ds:[0x80485cc]");
  asm("l.fxch st,st(1)");
  asm("l.fucom st(1)");
  asm("l.fstsw ax");
  asm("l.fstp st(1)");
  if((reg_var3 & 1)  ==  0) {
    asm("l.fstp st(0)");
    (void) STORE(local + 16, 134514091);
    reg_result = puts();
    reg_var3 = NARROW(reg_result / 256);
    asm("l.fld ss:[ebp-0x4]");
  }
  asm("l.fld ds:[0x80485cc]");
  asm("l.fucomp st(1)");
  asm("l.fstsw ax");
  if((reg_var3 & 1)  ==  0) {
    asm("l.fstp st(0)");
    (void) STORE(local + 16, 134514074);
    reg_result = puts();
    reg_var3 = NARROW(reg_result / 256);
    asm("l.fld ss:[ebp-0x4]");
  }
  asm("l.fld ds:[0x80485cc]");
  asm("l.fxch st,st(1)");
  asm("l.fucompp");
  asm("l.fstsw ax");
  if((reg_var3 & 69)  ==  0) {
    (void) STORE(local + 16, 134514069);
    reg_result = puts();
  }
  return reg_result;
}

// addr = 080484d4.0
// signature= func(__libc_csu_init, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? __libc_csu_init(???)
{
  (void) _init();
  reg_result = 0;
  reg_resulta = reg_result;
  reg_var1 = 0;
  if(reg_var1  <  reg_result) {
    do {
      reg_result = intern_redirectCall(LOAD(reg_var1 * 4 + 134518228));
      reg_var1++;
    } while(reg_var1  <  reg_resulta);
  }
  return reg_result;
}

// addr = 08048538.0
// signature= func(__do_global_ctors_aux, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? __do_global_ctors_aux(???)
{
// addr = 0804855c.0
// signature= func(_fini, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? _fini(???)
{
  (void) F_08048566();
  reg_result = __do_global_dtors_aux();
  return reg_result;
}

// addr = 08048566.0
// signature= func(F_08048566, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_08048566(???)
{
  reg_result = __do_global_dtors_aux();
  return reg_result;
}


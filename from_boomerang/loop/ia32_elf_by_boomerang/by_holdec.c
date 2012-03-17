// addr = 08048230.0
// signature= func(_init, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? _init(???)
{
  (void) call_gmon_start();
  (void) frame_dummy();
  reg_result = __do_global_ctors_aux();
  return reg_result;
}

// addr = 08048280.0
// signature= func(F_08048280, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_08048280(???)
{
  reg_ab = LOAD(InitStackPointer);
  (void) STORE(InitStackPointer, InitValue(initial_value_of_eax));
  (void) STORE(local + 12, 134513552);
  (void) STORE(local + 16, reg_ab);
  (void) STORE(local + 20, &ARG_0);
  (void) STORE(local + 24, 134513200);
  (void) STORE(local + 28, 134513664);
  (void) STORE(local + 32, InitValue(initial_value_of_edx));
  (void) STORE(local + 36, local + 36);
  reg_ad = __libc_start_main();
  asm("l.hlt");
  (void) STORE(local + 4, InitValue(initial_value_of_ebx));
  (void) STORE(local + 8, 0);
  (void) STORE(local, reg_ad);
  (void) F_080482ae();
  reg_result = LOAD(LOAD(local) + 4734);
  if(reg_result  !=  0) {
    reg_result = intern_redirectCall(reg_result);
  }
  return reg_result;
}

// addr = 080482a4.0
// signature= func(call_gmon_start, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? call_gmon_start(???)
{
  (void) F_080482ae();
  reg_result = LOAD(InitValue(initial_value_of_eax) + 4734);
  if(reg_result  !=  0) {
    reg_result = intern_redirectCall(reg_result);
  }
  return reg_result;
}

// addr = 080482ae.0
// signature= func(F_080482ae, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_080482ae(???)
{
  reg_result = LOAD(LOAD(InitStackPointer) + 4734);
  if(reg_result  !=  0) {
    reg_result = intern_redirectCall(reg_result);
  }
  return reg_result;
}

// addr = 080482d0.0
// signature= func(__do_global_dtors_aux, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? __do_global_dtors_aux(???)
{
  reg_result = InitValue(initial_value_of_eax);
  if(LOAD(&g_0x08049530)  ==  0) {
    if(LOAD(g_0x08049434)  !=  0) {
      do {
        reg_ae = LOAD(g_0x08049434);
        (void) STORE(&g_0x08049434, g_0x08049434 + 4);
        (void) intern_redirectCall(reg_ae);
      } while(LOAD(g_0x08049434)  !=  0);
    }
    reg_result = 0;
    if(reg_result  !=  0) {
      reg_result = F_00000000();
    }
    (void) STORE(&g_0x08049530, 1);
  }
  return reg_result;
}

// addr = 08048330.0
// signature= func(frame_dummy, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? frame_dummy(???)
{
  reg_ad = F_0804833d();
  if(reg_ad  !=  0) {
    (void) F_00000000();
  }
  reg_result = g_0x08049514;
  if(reg_result  !=  0) {
    reg_result = 0;
    if(reg_result  !=  0) {
      reg_result = F_00000000();
    }
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
  reg_result = g_0x08049514;
  if(reg_result  !=  0) {
    reg_result = 0;
    if(reg_result  !=  0) {
      reg_result = F_00000000();
    }
  }
  return reg_result;
}

// addr = 08048400.0
// signature= func(_fini, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? _fini(???)
{
  (void) F_0804840a();
  reg_result = __do_global_dtors_aux();
  return reg_result;
}

// addr = 0804840a.0
// signature= func(F_0804840a, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_0804840a(???)
{
  reg_result = __do_global_dtors_aux();
  return reg_result;
}


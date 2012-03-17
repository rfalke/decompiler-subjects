// addr = 0804829c.0
// signature= func(_init, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? _init(???)
{
  (void) call_gmon_start();
  (void) frame_dummy();
  reg_result = __do_global_ctors_aux();
  return reg_result;
}

// addr = 08048300.0
// signature= func(F_08048300, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_08048300(???)
{
  reg_ab = LOAD(InitStackPointer);
  (void) STORE(InitStackPointer, InitValue(initial_value_of_eax));
  (void) STORE(local + 12, 134513680);
  (void) STORE(local + 16, reg_ab);
  (void) STORE(local + 20, &ARG_0);
  (void) STORE(local + 24, 134513308);
  (void) STORE(local + 28, 134514320);
  (void) STORE(local + 32, InitValue(initial_value_of_edx));
  (void) STORE(local + 36, local + 36);
  reg_ad = __libc_start_main();
  asm("l.hlt");
  (void) STORE(local + 4, InitValue(initial_value_of_ebx));
  (void) STORE(local + 8, 0);
  (void) STORE(local, reg_ad);
  (void) F_0804832e();
  reg_result = LOAD(LOAD(local) + 5410);
  if(reg_result  !=  0) {
    reg_result = intern_redirectCall(reg_result);
  }
  return reg_result;
}

// addr = 08048324.0
// signature= func(call_gmon_start, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? call_gmon_start(???)
{
  (void) F_0804832e();
  reg_result = LOAD(InitValue(initial_value_of_eax) + 5410);
  if(reg_result  !=  0) {
    reg_result = intern_redirectCall(reg_result);
  }
  return reg_result;
}

// addr = 0804832e.0
// signature= func(F_0804832e, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_0804832e(???)
{
  reg_result = LOAD(LOAD(InitStackPointer) + 5410);
  if(reg_result  !=  0) {
    reg_result = intern_redirectCall(reg_result);
  }
  return reg_result;
}

// addr = 08048350.0
// signature= func(__do_global_dtors_aux, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? __do_global_dtors_aux(???)
{
  reg_result = InitValue(initial_value_of_eax);
  if(LOAD(&g_0x08049858)  ==  0) {
    if(LOAD(g_0x08049754)  !=  0) {
      do {
        reg_ae = LOAD(g_0x08049754);
        (void) STORE(&g_0x08049754, g_0x08049754 + 4);
        (void) intern_redirectCall(reg_ae);
      } while(LOAD(g_0x08049754)  !=  0);
    }
    reg_result = 0;
    if(reg_result  !=  0) {
      reg_result = F_00000000();
    }
    (void) STORE(&g_0x08049858, 1);
  }
  return reg_result;
}

// addr = 080483b0.0
// signature= func(frame_dummy, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? frame_dummy(???)
{
  reg_ad = F_080483bd();
  if(reg_ad  !=  0) {
    (void) F_00000000();
  }
  reg_result = g_0x08049834;
  if(reg_result  !=  0) {
    reg_result = 0;
    if(reg_result  !=  0) {
      reg_result = F_00000000();
    }
  }
  return reg_result;
}

// addr = 080483bd.0
// signature= func(F_080483bd, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_080483bd(???)
{
  if(InitValue(initial_value_of_eax)  !=  0) {
    (void) F_00000000();
  }
  reg_result = g_0x08049834;
  if(reg_result  !=  0) {
    reg_result = 0;
    if(reg_result  !=  0) {
      reg_result = F_00000000();
    }
  }
  return reg_result;
}

// addr = 08048690.0
// signature= func(_fini, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? _fini(???)
{
  (void) F_0804869a();
  reg_result = __do_global_dtors_aux();
  return reg_result;
}

// addr = 0804869a.0
// signature= func(F_0804869a, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_0804869a(???)
{
  reg_result = __do_global_dtors_aux();
  return reg_result;
}


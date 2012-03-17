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
  (void) STORE(local + 12, 134513532);
  (void) STORE(local + 16, reg_aa);
  (void) STORE(local + 20, &ARG_0);
  (void) STORE(local + 24, 134514184);
  (void) STORE(local + 28, 134514264);
  (void) STORE(local + 32, InitValue(initial_value_of_edx));
  (void) STORE(local + 36, local + 36);
  (void) F_080482a8();
  asm("l.hlt");
  (void) STORE(local + 4, InitValue(initial_value_of_ebx));
  (void) STORE(local + 8, 0);
  (void) STORE(local, &ARG_0);
  (void) F_08048306();
  if(LOAD(LOAD(local) + 5370)  !=  0) {
    (void) F_080482c8();
  }
  return LOAD(local + 4);
}

// addr = 080482fc.0
// signature= func(call_gmon_start, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? call_gmon_start(???)
{
  (void) F_08048306();
  if(LOAD(InitValue(initial_value_of_ecx) + 5370)  !=  0) {
    (void) F_080482c8();
  }
  return InitValue(initial_value_of_ebx);
}

// addr = 08048306.0
// signature= func(F_08048306, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_08048306(???)
{
  if(LOAD(LOAD(InitStackPointer) + 5370)  !=  0) {
    (void) F_080482c8();
  }
  return ARG_0;
}

// addr = 08048320.0
// signature= func(__do_global_dtors_aux, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? __do_global_dtors_aux(???)
{
  reg_result = InitValue(initial_value_of_eax);
  if(LOAD(&g_0x08049828)  ==  0) {
    while(1) {
      reg_result = g_0x08049824;
      reg_ad = LOAD(reg_result);
      if(LOAD(reg_result)  ==  0) {
        break;
      }
      (void) STORE(&g_0x08049824, reg_result + 4);
      (void) intern_redirectCall(reg_ad);
    }
    (void) STORE(&g_0x08049828, 1);
  }
  return reg_result;
}

// addr = 08048354.0
// signature= func(frame_dummy, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? frame_dummy(???)
{
  reg_result = g_0x08049734;
  if(reg_result  !=  0) {
    reg_result = 0;
    if(reg_result  !=  0) {
      reg_result = intern_redirectCall(reg_result);
    }
  }
  return reg_result;
}

// addr = 0804837c.0
// signature= func(main, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? main(???)
{
  (void) STORE(InitStackPointer + -40, ARG_0);
  (void) STORE(InitStackPointer + -44, 134514348);
  (void) F_080482b8();
  (void) STORE(InitStackPointer + -44, ARG_0 * 3);
  (void) b();
  return 0;
}

// addr = 080483c7.0
// signature= func(b, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? b(???)
{
  (void) F_080482b8();
  reg_result = c();
  return reg_result;
}

// addr = 0804846a.0
// signature= func(d, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? d(???)
{
  reg_result = F_080482b8();
  if(ARG_0  >  1) {
    reg_result = e();
  }
  return reg_result;
}

// addr = 0804849b.0
// signature= func(e, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? e(???)
{
  (void) F_080482b8();
  reg_result = c();
  return reg_result;
}

// addr = 080484c7.0
// signature= func(f, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? f(???)
{
  reg_result = F_080482b8();
  if(ARG_0  >  1) {
    reg_result = g();
  }
  return reg_result;
}

// addr = 080484f8.0
// signature= func(g, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? g(???)
{
  reg_result = F_080482b8();
  if(ARG_0  >  1) {
    reg_result = f();
  }
  return reg_result;
}

// addr = 08048529.0
// signature= func(h, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? h(???)
{
  reg_result = F_080482b8();
  if(ARG_0  >  0) {
    reg_result = i();
  }
  return reg_result;
}

// addr = 0804855a.0
// signature= func(i, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? i(???)
{
  reg_result = F_080482b8();
  return reg_result;
}

// addr = 08048575.0
// signature= func(j, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? j(???)
{
  reg_result = F_080482b8();
  if(ARG_0  >  1) {
    reg_result = k();
  }
  return reg_result;
}

// addr = 080485a4.0
// signature= func(k, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? k(???)
{
  reg_result = F_080482b8();
  if(ARG_0  >  1) {
    reg_result = e();
  }
  return reg_result;
}

// addr = 080485d5.0
// signature= func(l, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? l(???)
{
  reg_result = F_080482b8();
  if(ARG_0  >  1) {
    reg_result = b();
  }
  return reg_result;
}

// addr = 08048616.0
// signature= func(F_08048616, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_08048616(???)
{
  reg_ad = LOAD(InitStackPointer);
  (void) _init();
  reg_result = 0;
  (void) STORE(InitValue(initial_value_of_ebp) + -16, reg_result);
  if(!UNDEF) {
    reg_var1 = 0;
    reg_var2 = reg_ad + 4366;
    do {
      reg_result = intern_redirectCall(LOAD(reg_var2));
      reg_var1++;
      reg_var2 += 4;
    } while(reg_var1  <  LOAD(InitValue(initial_value_of_ebp) + -16));
  }
  return reg_result;
}

// addr = 08048658.0
// signature= func(__libc_csu_fini, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? __libc_csu_fini(???)
{
  return InitValue(initial_value_of_eax);
}

// addr = 08048660.0
// signature= func(__do_global_ctors_aux, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? __do_global_ctors_aux(???)
{
  reg_var2 = g_0x08049724;
  if(reg_var2  !=  -1) {
    reg_var1 = 134518564;
    do {
      (void) intern_redirectCall(reg_var2);
      reg_var2 = LOAD(reg_var1 + -4);
      reg_var1 += -4;
    } while(reg_var2  !=  -1);
  }
  return InitValue(initial_value_of_edx);
}

// addr = 08048688.0
// signature= func(_fini, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? _fini(???)
{
  (void) F_08048692();
  (void) __do_global_dtors_aux();
  return InitValue(initial_value_of_ebx);
}

// addr = 08048692.0
// signature= func(F_08048692, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_08048692(???)
{
  (void) __do_global_dtors_aux();
  return ARG_0;
}


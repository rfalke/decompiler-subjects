// addr = 080482a4.0
// signature= func(_init, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? _init(???)
{
  (void) call_gmon_start();
  (void) frame_dummy();
  reg_result = __do_global_ctors_aux();
  return reg_result;
}

// addr = 0804830c.0
// signature= func(_start, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? _start(???)
{
  reg_aa = LOAD(InitStackPointer);
  (void) STORE(InitStackPointer, InitValue(initial_value_of_eax));
  (void) STORE(local + 12, 134513654);
  (void) STORE(local + 16, reg_aa);
  (void) STORE(local + 20, &ARG_0);
  (void) STORE(local + 24, 134513764);
  (void) STORE(local + 28, 134513844);
  (void) STORE(local + 32, InitValue(initial_value_of_edx));
  (void) STORE(local + 36, local + 36);
  (void) F_080482dc();
  asm("l.hlt");
  (void) STORE(local + 4, InitValue(initial_value_of_ebx));
  (void) STORE(local + 8, 0);
  (void) STORE(local, &ARG_0);
  (void) F_0804833a();
  if(LOAD(LOAD(local) + 4822)  !=  0) {
    (void) F_080482fc();
  }
  return LOAD(local + 4);
}

// addr = 08048330.0
// signature= func(call_gmon_start, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? call_gmon_start(???)
{
  (void) F_0804833a();
  if(LOAD(InitValue(initial_value_of_ecx) + 4822)  !=  0) {
    (void) F_080482fc();
  }
  return InitValue(initial_value_of_ebx);
}

// addr = 0804833a.0
// signature= func(F_0804833a, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_0804833a(???)
{
  if(LOAD(LOAD(InitStackPointer) + 4822)  !=  0) {
    (void) F_080482fc();
  }
  return ARG_0;
}

// addr = 08048354.0
// signature= func(__do_global_dtors_aux, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? __do_global_dtors_aux(???)
{
  reg_result = InitValue(initial_value_of_eax);
  if(LOAD(&g_0x0804963c)  ==  0) {
    while(1) {
      reg_result = g_0x08049638;
      reg_ad = LOAD(reg_result);
      if(LOAD(reg_result)  ==  0) {
        break;
      }
      (void) STORE(&g_0x08049638, reg_result + 4);
      (void) intern_redirectCall(reg_ad);
    }
    (void) STORE(&g_0x0804963c, 1);
  }
  return reg_result;
}

// addr = 08048388.0
// signature= func(frame_dummy, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? frame_dummy(???)
{
  reg_result = g_0x08049544;
  if(reg_result  !=  0) {
    reg_result = 0;
    if(reg_result  !=  0) {
      reg_result = intern_redirectCall(reg_result);
    }
  }
  return reg_result;
}

// addr = 080483b0.0
// signature= func(fib, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? fib(???)
{
  if(ARG_0  <=  1) {
    reg_result = ARG_0;
  } else {
    reg_ae = fib();
    reg_aa = fib();
    reg_result = reg_aa + reg_ae;
  }
  return reg_result;
}

// addr = 080483f6.0
// signature= func(main, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? main(???)
{
  (void) STORE(local + 40, InitValue(initial_value_of_ebp));
  (void) STORE(InitStackPointer + -60, 134513928);
  (void) F_080482ec();
  (void) STORE(InitStackPointer + -56, local + 32);
  (void) STORE(InitStackPointer + -60, 134513943);
  (void) F_080482cc();
  (void) STORE(InitStackPointer + -48, LOAD(local + 32));
  reg_ab = fib();
  reg_aa = LOAD(local + 32);
  (void) STORE(local + 36, reg_ab);
  (void) STORE(InitStackPointer + -52, reg_ab);
  (void) STORE(InitStackPointer + -56, reg_aa);
  (void) STORE(InitStackPointer + -60, 134513946);
  (void) F_080482ec();
  return 0;
}

// addr = 08048472.0
// signature= func(F_08048472, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_08048472(???)
{
  reg_ad = LOAD(InitStackPointer);
  (void) _init();
  reg_result = 0;
  (void) STORE(InitValue(initial_value_of_ebp) + -16, reg_result);
  if(!UNDEF) {
    reg_var1 = 0;
    reg_var2 = reg_ad + 4290;
    do {
      reg_result = intern_redirectCall(LOAD(reg_var2));
      reg_var1++;
      reg_var2 += 4;
    } while(reg_var1  <  LOAD(InitValue(initial_value_of_ebp) + -16));
  }
  return reg_result;
}

// addr = 080484b4.0
// signature= func(__libc_csu_fini, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? __libc_csu_fini(???)
{
  return InitValue(initial_value_of_eax);
}

// addr = 080484bc.0
// signature= func(__do_global_ctors_aux, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? __do_global_ctors_aux(???)
{
  reg_var2 = g_0x08049534;
  if(reg_var2  !=  -1) {
    reg_var1 = 134518068;
    do {
      (void) intern_redirectCall(reg_var2);
      reg_var2 = LOAD(reg_var1 + -4);
      reg_var1 += -4;
    } while(reg_var2  !=  -1);
  }
  return InitValue(initial_value_of_edx);
}

// addr = 080484e4.0
// signature= func(_fini, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? _fini(???)
{
  (void) F_080484ee();
  (void) __do_global_dtors_aux();
  return InitValue(initial_value_of_ebx);
}

// addr = 080484ee.0
// signature= func(F_080484ee, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_080484ee(???)
{
  (void) __do_global_dtors_aux();
  return ARG_0;
}


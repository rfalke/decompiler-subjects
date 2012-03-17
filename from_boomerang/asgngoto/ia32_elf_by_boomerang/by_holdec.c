// addr = 0804853c.0
// signature= func(_init, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? _init(???)
{
  (void) call_gmon_start();
  (void) frame_dummy();
  reg_result = __do_global_ctors_aux();
  return reg_result;
}

// addr = 08048624.0
// signature= func(_start, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? _start(???)
{
  reg_aa = LOAD(InitStackPointer);
  (void) STORE(InitStackPointer, InitValue(initial_value_of_eax));
  (void) STORE(local + 12, reg_aa);
  (void) STORE(local + 16, &ARG_0);
  (void) STORE(local + 20, 134514796);
  (void) STORE(local + 24, 134514880);
  (void) STORE(local + 28, InitValue(initial_value_of_edx));
  (void) STORE(local + 32, local + 32);
  (void) STORE(local + 8, 134514724);
  (void) F_080485c4();
  asm("l.hlt");
  (void) STORE(local + 4, 0);
  (void) STORE(local, InitValue(initial_value_of_ebx));
  (void) F_08048651();
  reg_ab = LOAD(local);
  (void) STORE(local, InitValue(initial_value_of_edx));
  if(LOAD(reg_ab + 5215)  !=  0) {
    (void) intern_redirectCall(LOAD(reg_ab + 5215));
  }
  return LOAD(local);
}

// addr = 08048648.0
// signature= func(call_gmon_start, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? call_gmon_start(???)
{
  (void) F_08048651();
  if(LOAD(InitValue(initial_value_of_ebx) + 5215)  !=  0) {
    (void) intern_redirectCall(LOAD(InitValue(initial_value_of_ebx) + 5215));
  }
  return InitValue(initial_value_of_edx);
}

// addr = 08048651.0
// signature= func(F_08048651, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_08048651(???)
{
  reg_aa = LOAD(InitStackPointer);
  (void) STORE(InitStackPointer, InitValue(initial_value_of_edx));
  if(LOAD(reg_aa + 5215)  !=  0) {
    (void) intern_redirectCall(LOAD(reg_aa + 5215));
  }
  return LOAD(InitStackPointer);
}

// addr = 0804866c.0
// signature= func(__do_global_dtors_aux, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? __do_global_dtors_aux(???)
{
  reg_result = InitValue(initial_value_of_eax);
  if(LOAD(&g_0x08049b74)  ==  0) {
    while(1) {
      reg_result = g_0x08049af8;
      reg_ad = LOAD(reg_result);
      if(LOAD(reg_result)  ==  0) {
        break;
      }
      (void) STORE(&g_0x08049af8, reg_result + 4);
      (void) intern_redirectCall(reg_ad);
    }
    (void) STORE(&g_0x08049b74, 1);
  }
  return reg_result;
}

// addr = 080486a0.0
// signature= func(frame_dummy, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? frame_dummy(???)
{
  reg_result = g_0x080499c8;
  if(reg_result  !=  0) {
    reg_result = 0;
    if(reg_result  !=  0) {
      reg_result = intern_redirectCall(reg_result);
    }
  }
  return reg_result;
}

// addr = 08048824.0
// signature= func(main, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? main(???)
{
  (void) STORE(local + 28, ARG_0);
  (void) STORE(local + 32, ARG_1);
  (void) STORE(local + 52, InitValue(initial_value_of_ebp));
  (void) F_08048604();
  (void) F_080485e4();
  (void) F_080485d4();
  (void) STORE(local + 28, 134514052);
  (void) atexit();
  (void) MAIN__();
  (void) STORE(local + 28, 0);
  (void) F_080485f4();
  (void) STORE(local + 12, InitValue(initial_value_of_ebx));
  (void) STORE(local + 16, InitValue(initial_value_of_esi));
  (void) STORE(local + 20, InitValue(initial_value_of_edi));
  (void) STORE(local + 24, local + 52);
  (void) F_0804887a();
  reg_ab = LOAD(local);
  (void) _init();
  reg_var1 = 0;
  reg_result = 0;
  (void) STORE(local + 8, reg_ab + 4414);
  if(reg_var1  <  reg_result) {
    do {
      reg_result = intern_redirectCall(LOAD(reg_var1 * 4 + reg_ab + 4414));
      reg_var1++;
    } while(reg_var1  <  (LOAD(local + 8) + reg_ab * -1 + -4414) / 4);
  }
  return reg_result;
}

// addr = 0804887a.0
// signature= func(F_0804887a, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_0804887a(???)
{
  reg_ae = LOAD(InitStackPointer);
  (void) _init();
  reg_var1 = 0;
  reg_result = 0;
  (void) STORE(InitValue(initial_value_of_ebp) + -16, reg_ae + 4414);
  if(reg_var1  <  reg_result) {
    do {
      reg_result = intern_redirectCall(LOAD(reg_var1 * 4 + reg_ae + 4414));
      reg_var1++;
    } while(reg_var1  <  (LOAD(InitValue(initial_value_of_ebp) + -16) + reg_ae * -1 + -4414) / 4);
  }
  return reg_result;
}

// addr = 080488c0.0
// signature= func(__libc_csu_fini, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? __libc_csu_fini(???)
{
  (void) F_080488cb();
  reg_var1 = -1;
  while(reg_var1  !=  -1) {
    (void) intern_redirectCall(LOAD(InitValue(initial_value_of_ebx) + reg_var1 * 4 + 4333));
    reg_var1--;
  }
  reg_result = _fini();
  return reg_result;
}

// addr = 080488cb.0
// signature= func(F_080488cb, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_080488cb(???)
{
  reg_af = LOAD(InitStackPointer);
  reg_var1 = -1;
  while(reg_var1  !=  -1) {
    (void) intern_redirectCall(LOAD(reg_var1 * 4 + reg_af + 4333));
    reg_var1--;
  }
  reg_result = _fini();
  return reg_result;
}

// addr = 08048904.0
// signature= func(atexit, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? atexit(???)
{
  (void) F_0804890d();
  reg_result = F_080485a4();
  return reg_result;
}

// addr = 0804890d.0
// signature= func(F_0804890d, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_0804890d(???)
{
  reg_var1 = 0;
  if(LOAD(LOAD(InitStackPointer) + 4511)  !=  0) {
    reg_var1 = LOAD(LOAD(LOAD(InitStackPointer) + 4511));
  }
  (void) STORE(InitStackPointer, reg_var1);
  reg_result = F_080485a4();
  return reg_result;
}

// addr = 08048934.0
// signature= func(__do_global_ctors_aux, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? __do_global_ctors_aux(???)
{
  reg_var1 = 134519224;
  reg_var2 = g_0x080499b8;
  while(reg_var2  !=  -1) {
    reg_var1 += -4;
    (void) intern_redirectCall(reg_var2);
    reg_var2 = LOAD(reg_var1);
  }
  return InitValue(initial_value_of_edx);
}

// addr = 08048958.0
// signature= func(_fini, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? _fini(???)
{
  (void) F_08048961();
  reg_result = __do_global_dtors_aux();
  return reg_result;
}

// addr = 08048961.0
// signature= func(F_08048961, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_08048961(???)
{
  (void) STORE(InitStackPointer, InitValue(initial_value_of_eax));
  reg_result = __do_global_dtors_aux();
  return reg_result;
}


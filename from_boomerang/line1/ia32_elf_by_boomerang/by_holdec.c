// addr = 080482fc.0
// signature= func(_init, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? _init(???)
{
  (void) call_gmon_start();
  (void) frame_dummy();
  reg_result = __do_global_ctors_aux();
  return reg_result;
}

// addr = 08048390.0
// signature= func(_start, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? _start(???)
{
  reg_ab = LOAD(InitStackPointer);
  (void) STORE(InitStackPointer, InitValue(initial_value_of_eax));
  (void) STORE(local + 12, reg_ab);
  (void) STORE(local + 16, &ARG_0);
  (void) STORE(local + 20, 134513984);
  (void) STORE(local + 24, 134514080);
  (void) STORE(local + 28, InitValue(initial_value_of_edx));
  (void) STORE(local + 32, local + 32);
  (void) STORE(local + 8, 134513827);
  (void) __libc_start_main();
  asm("l.hlt");
  (void) STORE(local + 4, 0);
  (void) STORE(local, InitValue(initial_value_of_ebx));
  reg_ad = F_080483bd();
  reg_af = LOAD(local);
  (void) STORE(local, reg_ad);
  reg_result = LOAD(reg_af + 5039);
  if(reg_result  !=  0) {
    reg_result = intern_redirectCall(reg_result);
  }
  return reg_result;
}

// addr = 080483b4.0
// signature= func(call_gmon_start, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? call_gmon_start(???)
{
  (void) F_080483bd();
  reg_result = LOAD(InitValue(initial_value_of_ebx) + 5039);
  if(reg_result  !=  0) {
    reg_result = intern_redirectCall(reg_result);
  }
  return reg_result;
}

// addr = 080483bd.0
// signature= func(F_080483bd, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_080483bd(???)
{
  reg_ac = LOAD(InitStackPointer);
  (void) STORE(InitStackPointer, InitValue(initial_value_of_eax));
  reg_result = LOAD(reg_ac + 5039);
  if(reg_result  !=  0) {
    reg_result = intern_redirectCall(reg_result);
  }
  return reg_result;
}

// addr = 080483e0.0
// signature= func(__do_global_dtors_aux, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? __do_global_dtors_aux(???)
{
  reg_result = InitValue(initial_value_of_eax);
  if(LOAD(&g_0x08049770)  ==  0) {
// addr = 08048420.0
// signature= func(frame_dummy, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? frame_dummy(???)
{
  reg_result = g_0x08049744;
  if(reg_result  !=  0) {
    reg_result = 0;
    if(reg_result  !=  0) {
      reg_result = F_00000000();
    }
  }
  return reg_result;
}

// addr = 08048454.0
// signature= func(chomp, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? chomp(???)
{
  reg_result = fgets();
  if(reg_result  !=  0) {
    reg_ab = strchr();
    if(reg_ab  !=  0) {
      (void) STORE(reg_ab, 0);
    }
  }
  return reg_result;
}

// addr = 080484a3.0
// signature= func(main, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? main(???)
{
  (void) STORE(local + 1080, InitValue(initial_value_of_ebp));
  if(ARG_0  >  1) {
    (void) STORE(local + 4, 134514260);
    (void) STORE(local, LOAD(ARG_1 + 4));
    reg_ab = fopen();
    (void) STORE(local + 1068, reg_ab);
    if(LOAD(local + 1068)  ==  0) {
      (void) STORE(local + 28, 1);
    } else {
      (void) STORE(local + 4, 0x400);
      (void) STORE(local + 8, LOAD(local + 1068));
      (void) STORE(local, local + 32);
      reg_aa = chomp();
      if(reg_aa  !=  0) {
        (void) STORE(local + 4, local + 32);
        (void) STORE(local, 134514262);
        (void) printf();
      }
      (void) STORE(local, LOAD(local + 1068));
      (void) fclose();
    }
  } else {
    (void) STORE(local + 28, 1);
  }
  return LOAD(local + 28);
}

// addr = 08048540.0
// signature= func(__libc_csu_init, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? __libc_csu_init(???)
{
  reg_var1 = 0;
  (void) __i686.get_pc_thunk.bx();
  (void) _init();
  reg_result = InitValue(initial_value_of_ebx) + 4364;
  reg_resulta = reg_result;
  if(reg_var1  <  (InitValue(initial_value_of_ebx) + reg_result * -1 + 4364) / 4) {
    do {
      reg_result = intern_redirectCall(LOAD(InitValue(initial_value_of_ebx) + reg_var1 * 4 + 4364));
      reg_var1++;
    } while(reg_var1  <  (InitValue(initial_value_of_ebx) + reg_resulta * -1 + 4364) / 4);
  }
  return reg_result;
}

// addr = 080485f0.0
// signature= func(__i686.get_pc_thunk.bx, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? __i686.get_pc_thunk.bx(???)
{
  return InitValue(initial_value_of_eax);
}

// addr = 08048630.0
// signature= func(_fini, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? _fini(???)
{
  (void) F_08048639();
  reg_result = __do_global_dtors_aux();
  return reg_result;
}

// addr = 08048639.0
// signature= func(F_08048639, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_08048639(???)
{
  (void) STORE(InitStackPointer, InitValue(initial_value_of_edx));
  reg_result = __do_global_dtors_aux();
  return reg_result;
}


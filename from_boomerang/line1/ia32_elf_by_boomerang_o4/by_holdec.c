// addr = 080482f8.0
// signature= func(_init, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? _init(???)
{
  (void) call_gmon_start();
  (void) frame_dummy();
  reg_result = __do_global_ctors_aux();
  return reg_result;
}

// addr = 08048380.0
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
  (void) STORE(local + 8, 134513744);
  (void) __libc_start_main();
  asm("l.hlt");
  (void) STORE(local + 4, 0);
  (void) STORE(local, InitValue(initial_value_of_ebx));
  reg_ad = F_080483ad();
  reg_af = LOAD(local);
  (void) STORE(local, reg_ad);
  reg_result = LOAD(reg_af + 5051);
  if(reg_result  !=  0) {
    reg_result = intern_redirectCall(reg_result);
  }
  return reg_result;
}

// addr = 080483a4.0
// signature= func(call_gmon_start, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? call_gmon_start(???)
{
  (void) F_080483ad();
  reg_result = LOAD(InitValue(initial_value_of_ebx) + 5051);
  if(reg_result  !=  0) {
    reg_result = intern_redirectCall(reg_result);
  }
  return reg_result;
}

// addr = 080483ad.0
// signature= func(F_080483ad, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_080483ad(???)
{
  reg_ac = LOAD(InitStackPointer);
  (void) STORE(InitStackPointer, InitValue(initial_value_of_eax));
  reg_result = LOAD(reg_ac + 5051);
  if(reg_result  !=  0) {
    reg_result = intern_redirectCall(reg_result);
  }
  return reg_result;
}

// addr = 080483d0.0
// signature= func(__do_global_dtors_aux, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? __do_global_dtors_aux(???)
{
  reg_result = InitValue(initial_value_of_eax);
  if(LOAD(&g_0x0804976c)  ==  0) {
// addr = 08048410.0
// signature= func(frame_dummy, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? frame_dummy(???)
{
  reg_result = g_0x08049740;
  if(reg_result  !=  0) {
    reg_result = 0;
    if(reg_result  !=  0) {
      reg_result = F_00000000();
    }
  }
  return reg_result;
}

// addr = 08048450.0
// signature= func(main, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? main(???)
{
  (void) STORE(local + 1040, InitValue(initial_value_of_ebx));
  (void) STORE(local + 1048, InitValue(initial_value_of_ebp));
  reg_ae = BIT_TEST(31, ARG_0 + -1);
  reg_al = ARG_0  ==  1;
  reg_af = !BIT_TEST(31, ARG_0 + -1) && BIT_TEST(31, ARG_0);
  reg_ai = ARG_0  <=  1;
  (void) STORE(local + 1044, InitValue(initial_value_of_esi));
  if(ISDEF(reg_ai) ? reg_ai : !reg_af && reg_ae || !reg_ae && reg_af || reg_al) {
    reg_result = 1;
  } else {
    reg_ak = ARG_1;
    (void) STORE(local + 4, 134514260);
    (void) STORE(local, LOAD(reg_ak + 4));
    reg_aj = fopen();
    reg_result = 1;
    if(reg_aj  !=  0) {
      (void) STORE(local + 4, 0x400);
      (void) STORE(local + 8, reg_aj);
      (void) STORE(local, local + 16);
      reg_ag = fgets();
      if(reg_ag  !=  0) {
        (void) STORE(local + 4, 10);
        (void) STORE(local, reg_ag);
        reg_ab = strchr();
        if(reg_ab  !=  0) {
          (void) STORE(reg_ab, 0);
        }
        (void) STORE(local, local + 16);
        (void) puts();
      }
      (void) STORE(local, reg_aj);
      reg_result = fclose();
    }
  }
  return reg_result;
}

// addr = 080484f0.0
// signature= func(chomp, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? chomp(???)
{
  reg_result = fgets();
  if(reg_result  !=  0) {
    reg_aa = strchr();
    if(reg_aa  !=  0) {
      (void) STORE(reg_aa, 0);
    }
  }
  return reg_result;
}

// addr = 08048540.0
// signature= func(__libc_csu_init, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? __libc_csu_init(???)
{
  reg_var1 = 0;
  (void) __i686.get_pc_thunk.bx();
  (void) _init();
  reg_result = InitValue(initial_value_of_ebx) + 4360;
  reg_resulta = reg_result;
  if(reg_var1  <  (InitValue(initial_value_of_ebx) + reg_result * -1 + 4360) / 4) {
    do {
      reg_result = intern_redirectCall(LOAD(InitValue(initial_value_of_ebx) + reg_var1 * 4 + 4360));
      reg_var1++;
    } while(reg_var1  <  (InitValue(initial_value_of_ebx) + reg_resulta * -1 + 4360) / 4);
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


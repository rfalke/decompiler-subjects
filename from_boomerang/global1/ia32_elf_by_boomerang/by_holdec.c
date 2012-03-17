// addr = 08048230.0
// signature= func(_init, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? _init(???)
{
  (void) call_gmon_start();
  (void) frame_dummy();
  reg_result = __do_global_ctors_aux();
  return reg_result;
}

// addr = 08048278.0
// signature= func(_start, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? _start(???)
{
  reg_ab = LOAD(InitStackPointer);
  (void) STORE(InitStackPointer, InitValue(initial_value_of_eax));
  (void) STORE(local + 12, 134513501);
  (void) STORE(local + 16, reg_ab);
  (void) STORE(local + 20, &ARG_0);
  (void) STORE(local + 24, 134513552);
  (void) STORE(local + 28, 134513600);
  (void) STORE(local + 32, InitValue(initial_value_of_edx));
  (void) STORE(local + 36, local + 36);
  reg_ad = __libc_start_main();
  asm("l.hlt");
  (void) STORE(local + 4, InitValue(initial_value_of_ebx));
  (void) STORE(local + 8, 0);
  (void) STORE(local, reg_ad);
  (void) F_080482a6();
  reg_result = LOAD(LOAD(local) + 4782);
  if(reg_result  !=  0) {
    reg_result = intern_redirectCall(reg_result);
  }
  return reg_result;
}

// addr = 0804829c.0
// signature= func(call_gmon_start, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? call_gmon_start(???)
{
  (void) F_080482a6();
  reg_result = LOAD(InitValue(initial_value_of_eax) + 4782);
  if(reg_result  !=  0) {
    reg_result = intern_redirectCall(reg_result);
  }
  return reg_result;
}

// addr = 080482a6.0
// signature= func(F_080482a6, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_080482a6(???)
{
  reg_result = LOAD(LOAD(InitStackPointer) + 4782);
  if(reg_result  !=  0) {
    reg_result = intern_redirectCall(reg_result);
  }
  return reg_result;
}

// addr = 080482c0.0
// signature= func(__do_global_dtors_aux, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? __do_global_dtors_aux(???)
{
  reg_result = InitValue(initial_value_of_eax);
  if(LOAD(&g_0x08049558)  ==  0) {
// addr = 080482fc.0
// signature= func(frame_dummy, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? frame_dummy(???)
{
  reg_result = g_0x0804953c;
  if(reg_result  !=  0) {
    reg_result = 0;
    if(reg_result  !=  0) {
      reg_result = F_00000000();
    }
  }
  return reg_result;
}

// addr = 08048328.0
// signature= func(foo2, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? foo2(???)
{
  (void) STORE(&g_0x08049460, 12);
  reg_result = printf();
  return reg_result;
}

// addr = 08048350.0
// signature= func(foo1, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? foo1(???)
{
  reg_result = foo2();
  return reg_result;
}

// addr = 0804835d.0
// signature= func(main, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? main(???)
{
  (void) foo1();
  (void) printf();
  return 0;
}

// addr = 08048390.0
// signature= func(__libc_csu_init, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? __libc_csu_init(???)
{
  (void) _init();
  reg_result = 0;
  reg_resulta = reg_result;
  reg_var1 = 0;
  if(reg_var1  <  reg_result) {
    do {
      reg_result = intern_redirectCall(LOAD(reg_var1 * 4 + 134517840));
      reg_var1++;
    } while(reg_var1  <  reg_resulta);
  }
  return reg_result;
}

// addr = 080483f4.0
// signature= func(__do_global_ctors_aux, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? __do_global_ctors_aux(???)
{
// addr = 08048418.0
// signature= func(_fini, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? _fini(???)
{
  (void) F_08048422();
  reg_result = __do_global_dtors_aux();
  return reg_result;
}

// addr = 08048422.0
// signature= func(F_08048422, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_08048422(???)
{
  reg_result = __do_global_dtors_aux();
  return reg_result;
}


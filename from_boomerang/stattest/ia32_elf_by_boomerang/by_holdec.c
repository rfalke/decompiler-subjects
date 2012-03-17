// addr = 08048254.0
// signature= func(_init, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? _init(???)
{
  (void) call_gmon_start();
  (void) frame_dummy();
  reg_result = __do_global_ctors_aux();
  return reg_result;
}

// addr = 080482ac.0
// signature= func(_start, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? _start(???)
{
  reg_ab = LOAD(InitStackPointer);
  (void) STORE(InitStackPointer, InitValue(initial_value_of_eax));
  (void) STORE(local + 12, 134513500);
  (void) STORE(local + 16, reg_ab);
  (void) STORE(local + 20, &ARG_0);
  (void) STORE(local + 24, 134513556);
  (void) STORE(local + 28, 134513604);
  (void) STORE(local + 32, InitValue(initial_value_of_edx));
  (void) STORE(local + 36, local + 36);
  reg_ad = __libc_start_main();
  asm("l.hlt");
  (void) STORE(local + 4, InitValue(initial_value_of_ebx));
  (void) STORE(local + 8, 0);
  (void) STORE(local, reg_ad);
  (void) F_080482da();
  reg_result = LOAD(LOAD(local) + 4786);
  if(reg_result  !=  0) {
    reg_result = intern_redirectCall(reg_result);
  }
  return reg_result;
}

// addr = 080482d0.0
// signature= func(call_gmon_start, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? call_gmon_start(???)
{
  (void) F_080482da();
  reg_result = LOAD(InitValue(initial_value_of_eax) + 4786);
  if(reg_result  !=  0) {
    reg_result = intern_redirectCall(reg_result);
  }
  return reg_result;
}

// addr = 080482da.0
// signature= func(F_080482da, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_080482da(???)
{
  reg_result = LOAD(LOAD(InitStackPointer) + 4786);
  if(reg_result  !=  0) {
    reg_result = intern_redirectCall(reg_result);
  }
  return reg_result;
}

// addr = 080482f4.0
// signature= func(__do_global_dtors_aux, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? __do_global_dtors_aux(???)
{
  reg_result = InitValue(initial_value_of_eax);
  if(LOAD(&g_0x08049590)  ==  0) {
// addr = 08048330.0
// signature= func(frame_dummy, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? frame_dummy(???)
{
  reg_result = g_0x08049570;
  if(reg_result  !=  0) {
    reg_result = 0;
    if(reg_result  !=  0) {
      reg_result = F_00000000();
    }
  }
  return reg_result;
}

// addr = 0804835c.0
// signature= func(main, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? main(???)
{
  (void) STORE(local + 116, InitValue(initial_value_of_ebx));
  (void) STORE(local + 12, InitValue(initial_value_of_edx));
  (void) STORE(local + 120, InitValue(initial_value_of_ebp));
  (void) STORE(local + 4, 134513736);
  (void) STORE(local + 8, local + 16);
  (void) STORE(local, 3);
  reg_result = __xstat();
  (void) STORE(local + 4, reg_result);
  (void) STORE(local + 8, LOAD(local + 60));
  (void) STORE(local, 134513760);
  (void) printf();
  return reg_result;
}

// addr = 08048394.0
// signature= func(__libc_csu_init, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? __libc_csu_init(???)
{
  (void) _init();
  reg_result = 0;
  reg_resulta = reg_result;
  reg_var1 = 0;
  if(reg_var1  <  reg_result) {
    do {
      reg_result = intern_redirectCall(LOAD(reg_var1 * 4 + 134517900));
      reg_var1++;
    } while(reg_var1  <  reg_resulta);
  }
  return reg_result;
}

// addr = 080483f8.0
// signature= func(__do_global_ctors_aux, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? __do_global_ctors_aux(???)
{
// addr = 0804841c.0
// signature= func(_fini, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? _fini(???)
{
  (void) F_08048426();
  reg_result = __do_global_dtors_aux();
  return reg_result;
}

// addr = 08048426.0
// signature= func(F_08048426, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_08048426(???)
{
  reg_result = __do_global_dtors_aux();
  return reg_result;
}


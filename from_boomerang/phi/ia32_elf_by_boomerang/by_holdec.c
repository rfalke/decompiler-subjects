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
  (void) STORE(local + 24, 134513708);
  (void) STORE(local + 28, 134513756);
  (void) STORE(local + 32, InitValue(initial_value_of_edx));
  (void) STORE(local + 36, local + 36);
  reg_ad = __libc_start_main();
  asm("l.hlt");
  (void) STORE(local + 4, InitValue(initial_value_of_ebx));
  (void) STORE(local + 8, 0);
  (void) STORE(local, reg_ad);
  (void) F_080482da();
  reg_result = LOAD(LOAD(local) + 4906);
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
  reg_result = LOAD(InitValue(initial_value_of_eax) + 4906);
  if(reg_result  !=  0) {
    reg_result = intern_redirectCall(reg_result);
  }
  return reg_result;
}

// addr = 080482da.0
// signature= func(F_080482da, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_080482da(???)
{
  reg_result = LOAD(LOAD(InitStackPointer) + 4906);
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
  if(LOAD(&g_0x08049608)  ==  0) {
// addr = 08048330.0
// signature= func(frame_dummy, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? frame_dummy(???)
{
  reg_result = g_0x080495e8;
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
  (void) STORE(local + 16, InitValue(initial_value_of_eax));
  (void) STORE(local + 20, InitValue(initial_value_of_ebx));
  (void) STORE(local + 24, InitValue(initial_value_of_ebp));
  (void) STORE(local, 134513880);
  (void) printf();
  reg_var2 = local + 16;
  (void) STORE(local + 4, reg_var2);
  (void) STORE(local, 134513895);
  (void) scanf();
  reg_var1 = LOAD(local + 16);
  if(reg_var1  >  1) {
    (void) STORE(local, reg_var1 + -1);
    reg_ag = fib();
    reg_var1 = reg_ag;
    (void) STORE(local, reg_ag + -1);
    reg_am = fib();
    reg_var2 = reg_am + reg_var1;
    (void) STORE(local + 4, reg_var2);
    (void) STORE(local, 134513895);
    (void) printf();
    reg_var4 = 0;
  } else {
    reg_var3 = 1;
    if(reg_var1  ==  1) {
      reg_var4 = 1;
    } else {
      reg_var4 = 0;
    }
  }
  if(reg_var4  ==  0) {
    reg_var3 = reg_var1;
  }
  (void) STORE(local + 12, reg_var2);
  (void) STORE(local + 4, LOAD(local + 16));
  (void) STORE(local + 8, reg_var3);
  (void) STORE(local, 134513898);
  (void) printf();
  return 0;
}

// addr = 0804842c.0
// signature= func(__libc_csu_init, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? __libc_csu_init(???)
{
  (void) _init();
  reg_result = 0;
  reg_resulta = reg_result;
  reg_var1 = 0;
  if(reg_var1  <  reg_result) {
    do {
      reg_result = intern_redirectCall(LOAD(reg_var1 * 4 + 134518020));
      reg_var1++;
    } while(reg_var1  <  reg_resulta);
  }
  return reg_result;
}

// addr = 08048490.0
// signature= func(__do_global_ctors_aux, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? __do_global_ctors_aux(???)
{
// addr = 080484b4.0
// signature= func(_fini, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? _fini(???)
{
  (void) F_080484be();
  reg_result = __do_global_dtors_aux();
  return reg_result;
}

// addr = 080484be.0
// signature= func(F_080484be, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_080484be(???)
{
  reg_result = __do_global_dtors_aux();
  return reg_result;
}


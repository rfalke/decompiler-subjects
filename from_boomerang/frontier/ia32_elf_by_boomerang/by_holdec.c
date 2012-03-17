// addr = 0804820c.0
// signature= func(_init, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? _init(???)
{
  (void) call_gmon_start();
  (void) frame_dummy();
  reg_result = __do_global_ctors_aux();
  return reg_result;
}

// addr = 08048244.0
// signature= func(_start, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? _start(???)
{
  reg_ab = LOAD(InitStackPointer);
  (void) STORE(InitStackPointer, InitValue(initial_value_of_eax));
  (void) STORE(local + 12, 134513396);
  (void) STORE(local + 16, reg_ab);
  (void) STORE(local + 20, &ARG_0);
  (void) STORE(local + 24, 134513608);
  (void) STORE(local + 28, 134513656);
  (void) STORE(local + 32, InitValue(initial_value_of_edx));
  (void) STORE(local + 36, local + 36);
  reg_ad = __libc_start_main();
  asm("l.hlt");
  (void) STORE(local + 4, InitValue(initial_value_of_ebx));
  (void) STORE(local + 8, 0);
  (void) STORE(local, reg_ad);
  (void) F_08048272();
  reg_result = LOAD(LOAD(local) + 4862);
  if(reg_result  !=  0) {
    reg_result = intern_redirectCall(reg_result);
  }
  return reg_result;
}

// addr = 08048268.0
// signature= func(call_gmon_start, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? call_gmon_start(???)
{
  (void) F_08048272();
  reg_result = LOAD(InitValue(initial_value_of_eax) + 4862);
  if(reg_result  !=  0) {
    reg_result = intern_redirectCall(reg_result);
  }
  return reg_result;
}

// addr = 08048272.0
// signature= func(F_08048272, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_08048272(???)
{
  reg_result = LOAD(LOAD(InitStackPointer) + 4862);
  if(reg_result  !=  0) {
    reg_result = intern_redirectCall(reg_result);
  }
  return reg_result;
}

// addr = 0804828c.0
// signature= func(__do_global_dtors_aux, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? __do_global_dtors_aux(???)
{
  reg_result = InitValue(initial_value_of_eax);
  if(LOAD(&g_0x08049574)  ==  0) {
// addr = 080482c8.0
// signature= func(frame_dummy, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? frame_dummy(???)
{
  reg_result = g_0x0804955c;
  if(reg_result  !=  0) {
    reg_result = 0;
    if(reg_result  !=  0) {
      reg_result = F_00000000();
    }
  }
  return reg_result;
}

// addr = 080482f4.0
// signature= func(main, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? main(???)
{

// calls     [9, 11, 16]
// called    [11, 17]
// deep-calls     {8, 9, 11, 16}
// depp-called    {8, 9, 11, 17}
// startStackOffset -12
// modifiedAddresses  [ADDR(ARG_0)]
L8:
  reg_ab = ARG_0;
  (void) STORE(&ARG_0, ARG_0 + -1);
  if(reg_ab  >  1) goto L9;
  if(ARG_0  !=  12) goto L11;
  goto L16;

// calls     [11, 16]
// called    [8]
// deep-calls     {8, 9, 11, 16}
// depp-called    {8, 9, 11, 17}
// startStackOffset -12
// modifiedAddresses  [ADDR(ARG_0)]
L9:
  reg_aa = ARG_0;
  (void) STORE(&ARG_0, ARG_0 + -1);
  if(reg_aa  <=  2) goto L11;
  goto L16;

// calls     [8, 16]
// called    [8, 9]
// deep-calls     {8, 9, 11, 16}
// depp-called    {8, 9, 11, 17}
// startStackOffset -12
// modifiedAddresses  []
L11:
  if(ARG_0  >  0) goto L8;
  goto L16;
  if(ARG_0  ==  2 || ARG_0  ==  5) {
    for(...) {
      // state = PRELIMINARY
      while(ARG_0  >  0) {
        // nothing
      }
    }
  }
}

// addr = 080483c8.0
// signature= func(__libc_csu_init, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? __libc_csu_init(???)
{
  (void) _init();
  reg_result = 0;
  reg_resulta = reg_result;
  reg_var1 = 0;
  if(reg_var1  <  reg_result) {
    do {
      reg_result = intern_redirectCall(LOAD(reg_var1 * 4 + 134517880));
      reg_var1++;
    } while(reg_var1  <  reg_resulta);
  }
  return reg_result;
}

// addr = 0804842c.0
// signature= func(__do_global_ctors_aux, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? __do_global_ctors_aux(???)
{
// addr = 08048450.0
// signature= func(_fini, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? _fini(???)
{
  (void) F_0804845a();
  reg_result = __do_global_dtors_aux();
  return reg_result;
}

// addr = 0804845a.0
// signature= func(F_0804845a, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_0804845a(???)
{
  reg_result = __do_global_dtors_aux();
  return reg_result;
}


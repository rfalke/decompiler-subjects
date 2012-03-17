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
  (void) STORE(local + 12, 134513448);
  (void) STORE(local + 16, reg_ab);
  (void) STORE(local + 20, &ARG_0);
  (void) STORE(local + 24, 134513648);
  (void) STORE(local + 28, 134513696);
  (void) STORE(local + 32, InitValue(initial_value_of_edx));
  (void) STORE(local + 36, local + 36);
  reg_ad = __libc_start_main();
  asm("l.hlt");
  (void) STORE(local + 4, InitValue(initial_value_of_ebx));
  (void) STORE(local + 8, 0);
  (void) STORE(local, reg_ad);
  (void) F_080482a6();
  reg_result = LOAD(LOAD(local) + 4858);
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
  reg_result = LOAD(InitValue(initial_value_of_eax) + 4858);
  if(reg_result  !=  0) {
    reg_result = intern_redirectCall(reg_result);
  }
  return reg_result;
}

// addr = 080482a6.0
// signature= func(F_080482a6, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_080482a6(???)
{
  reg_result = LOAD(LOAD(InitStackPointer) + 4858);
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
  if(LOAD(&g_0x080495a4)  ==  0) {
// addr = 080482fc.0
// signature= func(frame_dummy, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? frame_dummy(???)
{
  reg_result = g_0x08049588;
  if(reg_result  !=  0) {
    reg_result = 0;
    if(reg_result  !=  0) {
      reg_result = F_00000000();
    }
  }
  return reg_result;
}

// addr = 08048328.0
// signature= func(main, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? main(???)
{

// calls     [2, 6]
// called    [0, 7]
// deep-calls     {1, 2, 3, 4, 5, 6, 7, 11}
// depp-called    {0, 1, 2, 3, 4, 5, 6, 7, 12}
// startStackOffset -12
// modifiedAddresses  [ADD(local, 20)]
L1:
  (void) STORE(local + 20, 2);
  if(ARG_0  <=  2) goto L2;
  goto L6;

// calls     [3, 6]
// called    [1]
// deep-calls     {1, 2, 3, 4, 5, 6, 7, 11}
// depp-called    {0, 1, 2, 3, 4, 5, 6, 7, 12}
// startStackOffset -12
// modifiedAddresses  [ADD(local, 20)]
L2:
  (void) STORE(local + 20, 3);
  if(ARG_0  <=  3) goto L6;
  goto L3;

// calls     [4, 5]
// called    [2]
// deep-calls     {1, 2, 3, 4, 5, 6, 7, 11}
// depp-called    {0, 1, 2, 3, 4, 5, 6, 7, 12}
// startStackOffset -12
// modifiedAddresses  [ADD(local, 20)]
L3:
  (void) STORE(local + 20, 4);
  if(ARG_0  <=  4) goto L5;
  goto L4;

// calls     [7]
// called    [3, 6]
// deep-calls     {1, 2, 3, 4, 5, 6, 7, 11}
// depp-called    {0, 1, 2, 3, 4, 5, 6, 7, 12}
// startStackOffset -12
// modifiedAddresses  [ALL]
L4:
  (void) STORE(local + 20, 5);
  (void) STORE(local, 134513820);
  (void) printf();
  goto L7;

// calls     [7]
// called    [3]
// deep-calls     {1, 2, 3, 4, 5, 6, 7, 11}
// depp-called    {0, 1, 2, 3, 4, 5, 6, 7, 12}
// startStackOffset -12
// modifiedAddresses  [ADD(local, 20)]
L5:
  (void) STORE(local + 20, 8);
  goto L7;

// calls     [4]
// called    [1, 2]
// deep-calls     {1, 2, 3, 4, 5, 6, 7, 11}
// depp-called    {0, 1, 2, 3, 4, 5, 6, 7, 12}
// startStackOffset -12
// modifiedAddresses  [ALL]
L6:
  (void) STORE(local + 20, 9);
  (void) STORE(local, 134513822);
  (void) printf();
  (void) STORE(local + 20, 10);
  goto L4;

// calls     [1, 11]
// called    [4, 5]
// deep-calls     {1, 2, 3, 4, 5, 6, 7, 11}
// depp-called    {0, 1, 2, 3, 4, 5, 6, 7, 12}
// startStackOffset -12
// modifiedAddresses  [ADD(local, 20)]
L7:
  (void) STORE(local + 20, 6);
  if(ARG_0  <=  5) goto L1;
  goto L11;
  for(...) {
    // state = PRELIMINARY
    do {
      (void) STORE(local + 20, 11);
      if(ARG_0  ==  11) {
        break;
      }
      (void) STORE(local + 20, 12);
    } while(ARG_0  <=  11);
  }
  (void) STORE(local + 20, 13);
}

// addr = 080483f0.0
// signature= func(__libc_csu_init, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? __libc_csu_init(???)
{
  (void) _init();
  reg_result = 0;
  reg_resulta = reg_result;
  reg_var1 = 0;
  if(reg_var1  <  reg_result) {
    do {
      reg_result = intern_redirectCall(LOAD(reg_var1 * 4 + 134517924));
      reg_var1++;
    } while(reg_var1  <  reg_resulta);
  }
  return reg_result;
}

// addr = 08048454.0
// signature= func(__do_global_ctors_aux, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? __do_global_ctors_aux(???)
{
// addr = 08048478.0
// signature= func(_fini, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? _fini(???)
{
  (void) F_08048482();
  reg_result = __do_global_dtors_aux();
  return reg_result;
}

// addr = 08048482.0
// signature= func(F_08048482, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_08048482(???)
{
  reg_result = __do_global_dtors_aux();
  return reg_result;
}


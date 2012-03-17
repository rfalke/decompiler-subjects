// addr = 0804835c.0
// signature= func(_init, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? _init(???)
{
  (void) call_gmon_start();
  (void) frame_dummy();
  reg_result = __do_global_ctors_aux();
  return reg_result;
}

// addr = 080483d0.0
// signature= func(_start, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? _start(???)
{
  reg_aa = LOAD(InitStackPointer);
  (void) STORE(InitStackPointer, InitValue(initial_value_of_eax));
  (void) STORE(local + 12, 134513791);
  (void) STORE(local + 16, reg_aa);
  (void) STORE(local + 20, &ARG_0);
  (void) STORE(local + 24, 134513872);
  (void) STORE(local + 28, 134513984);
  (void) STORE(local + 32, InitValue(initial_value_of_edx));
  (void) STORE(local + 36, local + 36);
  (void) F_08048394();
  asm("l.hlt");
  (void) STORE(local + 4, InitValue(initial_value_of_ebx));
  (void) STORE(local + 8, 0);
  (void) STORE(local, &ARG_0);
  (void) F_080483fe();
  if(LOAD(LOAD(local) + 4838)  !=  0) {
    (void) F_080483b4();
  }
  return LOAD(local + 4);
}

// addr = 080483f4.0
// signature= func(call_gmon_start, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? call_gmon_start(???)
{
  (void) F_080483fe();
  if(LOAD(InitValue(initial_value_of_ecx) + 4838)  !=  0) {
    (void) F_080483b4();
  }
  return InitValue(initial_value_of_ebx);
}

// addr = 080483fe.0
// signature= func(F_080483fe, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_080483fe(???)
{
  if(LOAD(LOAD(InitStackPointer) + 4838)  !=  0) {
    (void) F_080483b4();
  }
  return ARG_0;
}

// addr = 08048420.0
// signature= func(__do_global_dtors_aux, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? __do_global_dtors_aux(???)
{
  reg_result = InitValue(initial_value_of_eax);
  if(LOAD(&g_0x08049710)  ==  0) {
    while(1) {
      reg_result = g_0x0804970c;
      reg_ad = LOAD(reg_result);
      if(LOAD(reg_result)  ==  0) {
        break;
      }
      (void) STORE(&g_0x0804970c, reg_result + 4);
      (void) intern_redirectCall(reg_ad);
    }
    (void) STORE(&g_0x08049710, 1);
  }
  return reg_result;
}

// addr = 08048450.0
// signature= func(frame_dummy, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? frame_dummy(???)
{
  reg_result = g_0x08049610;
  if(reg_result  !=  0) {
    reg_result = 0;
    if(reg_result  !=  0) {
      reg_result = intern_redirectCall(reg_result);
    }
  }
  return reg_result;
}

// addr = 08048474.0
// signature= func(getDevice, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? getDevice(???)
{
  return LOAD(ARG_0 + 24);
}

// addr = 0804847f.0
// signature= func(main, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? main(???)
{
  reg_aa = F_08048384();
  (void) STORE(InitStackPointer + -44, LOAD(reg_aa));
  reg_ab = getDevice();
  (void) STORE(InitStackPointer + -40, reg_ab);
  (void) STORE(InitStackPointer + -44, 134514168);
  (void) F_080483a4();
  return 0;
}

// addr = 080484de.0
// signature= func(F_080484de, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_080484de(???)
{
  reg_ad = LOAD(InitStackPointer);
  (void) _init();
  reg_result = 0;
  (void) STORE(InitValue(initial_value_of_ebp) + -16, reg_result);
  if(!UNDEF) {
    reg_var1 = 0;
    reg_var2 = reg_ad + 4386;
    do {
      reg_result = intern_redirectCall(LOAD(reg_var2));
      reg_var1++;
      reg_var2 += 4;
    } while(reg_var1  <  LOAD(InitValue(initial_value_of_ebp) + -16));
  }
  return reg_result;
}

// addr = 080485d4.0
// signature= func(_fini, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? _fini(???)
{
  (void) F_080485de();
  (void) __do_global_dtors_aux();
  return InitValue(initial_value_of_ebx);
}

// addr = 080485de.0
// signature= func(F_080485de, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_080485de(???)
{
  (void) __do_global_dtors_aux();
  return ARG_0;
}


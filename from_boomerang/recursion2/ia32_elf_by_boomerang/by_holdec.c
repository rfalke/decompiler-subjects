// addr = 08048280.0
// signature= func(_init, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? _init(???)
{
  (void) call_gmon_start();
  (void) frame_dummy();
  reg_result = __do_global_ctors_aux();
  return reg_result;
}

// addr = 080482d8.0
// signature= func(_start, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? _start(???)
{
  reg_aa = LOAD(InitStackPointer);
  (void) STORE(InitStackPointer, InitValue(initial_value_of_eax));
  (void) STORE(local + 12, 134513532);
  (void) STORE(local + 16, reg_aa);
  (void) STORE(local + 20, &ARG_0);
  (void) STORE(local + 24, 134514240);
  (void) STORE(local + 28, 134514320);
  (void) STORE(local + 32, InitValue(initial_value_of_edx));
  (void) STORE(local + 36, local + 36);
  (void) F_080482a8();
  asm("l.hlt");
  (void) STORE(local + 4, InitValue(initial_value_of_ebx));
  (void) STORE(local + 8, 0);
  (void) STORE(local, &ARG_0);
  (void) F_08048306();
  if(LOAD(LOAD(local) + 5346)  !=  0) {
    (void) F_080482c8();
  }
  return LOAD(local + 4);
}

// addr = 080482fc.0
// signature= func(call_gmon_start, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? call_gmon_start(???)
{
  (void) F_08048306();
  if(LOAD(InitValue(initial_value_of_ecx) + 5346)  !=  0) {
    (void) F_080482c8();
  }
  return InitValue(initial_value_of_ebx);
}

// addr = 08048306.0
// signature= func(F_08048306, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_08048306(???)
{
  if(LOAD(LOAD(InitStackPointer) + 5346)  !=  0) {
    (void) F_080482c8();
  }
  return ARG_0;
}

// addr = 08048320.0
// signature= func(__do_global_dtors_aux, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? __do_global_dtors_aux(???)
{
  reg_result = InitValue(initial_value_of_eax);
  if(LOAD(&g_0x08049848)  ==  0) {
    while(1) {
      reg_result = g_0x0804980c;
      reg_ad = LOAD(reg_result);
      if(LOAD(reg_result)  ==  0) {
        break;
      }
      (void) STORE(&g_0x0804980c, reg_result + 4);
      (void) intern_redirectCall(reg_ad);
    }
    (void) STORE(&g_0x08049848, 1);
  }
  return reg_result;
}

// addr = 08048354.0
// signature= func(frame_dummy, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? frame_dummy(???)
{
  reg_result = g_0x0804971c;
  if(reg_result  !=  0) {
    reg_result = 0;
    if(reg_result  !=  0) {
      reg_result = intern_redirectCall(reg_result);
    }
  }
  return reg_result;
}

// addr = 0804837c.0
// signature= func(main, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? main(???)
{
  (void) b();
  (void) STORE(InitStackPointer + -36, 55);
  (void) STORE(InitStackPointer + -40, 99);
  (void) STORE(InitStackPointer + -44, 134514404);
  (void) F_080482b8();
  (void) STORE(InitStackPointer + -40, g_0x0804984c);
  (void) STORE(InitStackPointer + -44, 134514426);
  (void) F_080482b8();
  return 0;
}

// addr = 080483d6.0
// signature= func(b, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? b(???)
{
  (void) STORE(&g_0x08049810, g_0x08049810 + -1);
  if(g_0x08049810  notSigned  0) {
    (void) c();
  }
  reg_aa = g_0x0804984c;
  (void) STORE(&g_0x0804984c, g_0x0804984c + 2);
  return reg_aa + 2;
}

// addr = 08048408.0
// signature= func(c, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? c(???)
{
  (void) STORE(&g_0x08049814, g_0x08049814 + -1);
  if(g_0x08049814  notSigned  0) {
    (void) d();
  }
  (void) STORE(&g_0x08049820, g_0x08049820 + -1);
  if(g_0x08049820  notSigned  0) {
    (void) f();
  }
  (void) STORE(&g_0x0804982c, g_0x0804982c + -1);
  if(g_0x0804982c  notSigned  0) {
    (void) h();
  }
  (void) STORE(&g_0x08049834, g_0x08049834 + -1);
  if(g_0x08049834  notSigned  0) {
    (void) j();
  }
  (void) STORE(&g_0x08049840, g_0x08049840 + -1);
  if(g_0x08049840  notSigned  0) {
    (void) l();
  }
  reg_aa = g_0x0804984c;
  (void) STORE(&g_0x0804984c, g_0x0804984c + 3);
  return reg_aa + 3;
}

// addr = 080484a6.0
// signature= func(d, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? d(???)
{
  (void) STORE(&g_0x08049818, g_0x08049818 + -1);
  if(g_0x08049818  notSigned  0) {
    (void) e();
  }
  reg_aa = g_0x0804984c;
  (void) STORE(&g_0x0804984c, g_0x0804984c + 5);
  return reg_aa + 5;
}

// addr = 080484d8.0
// signature= func(e, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? e(???)
{
  (void) STORE(&g_0x0804981c, g_0x0804981c + -1);
  if(g_0x0804981c  notSigned  0) {
    (void) c();
  }
  reg_aa = g_0x0804984c;
  (void) STORE(&g_0x0804984c, g_0x0804984c + 7);
  return reg_aa + 7;
}

// addr = 0804850a.0
// signature= func(f, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? f(???)
{
  (void) STORE(&g_0x08049824, g_0x08049824 + -1);
  if(g_0x08049824  notSigned  0) {
    (void) g();
  }
  reg_aa = g_0x0804984c;
  (void) STORE(&g_0x0804984c, g_0x0804984c + 11);
  return reg_aa + 11;
}

// addr = 08048538.0
// signature= func(g, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? g(???)
{
  (void) STORE(&g_0x08049828, g_0x08049828 + -1);
  if(g_0x08049828  notSigned  0) {
    (void) f();
  }
  reg_aa = g_0x0804984c;
  (void) STORE(&g_0x0804984c, g_0x0804984c + 13);
  return reg_aa + 13;
}

// addr = 08048566.0
// signature= func(h, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? h(???)
{
  (void) STORE(&g_0x08049830, g_0x08049830 + -1);
  if(g_0x08049830  notSigned  0) {
    (void) i();
  }
  reg_aa = g_0x0804984c;
  (void) STORE(&g_0x0804984c, g_0x0804984c + 17);
  return reg_aa + 17;
}

// addr = 08048594.0
// signature= func(i, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? i(???)
{
  reg_aa = g_0x0804984c;
  (void) STORE(&g_0x0804984c, g_0x0804984c + 19);
  return reg_aa + 19;
}

// addr = 080485a6.0
// signature= func(j, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? j(???)
{
  (void) STORE(&g_0x08049838, g_0x08049838 + -1);
  if(g_0x08049838  notSigned  0) {
    (void) k();
  }
  reg_aa = g_0x0804984c;
  (void) STORE(&g_0x0804984c, g_0x0804984c + 23);
  return reg_aa + 23;
}

// addr = 080485d8.0
// signature= func(k, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? k(???)
{
  (void) STORE(&g_0x0804983c, g_0x0804983c + -1);
  if(g_0x0804983c  notSigned  0) {
    (void) e();
  }
  reg_aa = g_0x0804984c;
  (void) STORE(&g_0x0804984c, g_0x0804984c + 27);
  return reg_aa + 27;
}

// addr = 0804860b.0
// signature= func(l, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? l(???)
{
  (void) STORE(&g_0x08049844, g_0x08049844 + -1);
  if(g_0x08049844  notSigned  0) {
    (void) b();
  }
  reg_aa = g_0x0804984c;
  (void) STORE(&g_0x0804984c, g_0x0804984c + 29);
  return reg_aa + 29;
}

// addr = 0804864e.0
// signature= func(F_0804864e, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_0804864e(???)
{
  reg_ad = LOAD(InitStackPointer);
  (void) _init();
  reg_result = 0;
  (void) STORE(InitValue(initial_value_of_ebp) + -16, reg_result);
  if(!UNDEF) {
    reg_var1 = 0;
    reg_var2 = reg_ad + 4286;
    do {
      reg_result = intern_redirectCall(LOAD(reg_var2));
      reg_var1++;
      reg_var2 += 4;
    } while(reg_var1  <  LOAD(InitValue(initial_value_of_ebp) + -16));
  }
  return reg_result;
}

// addr = 08048690.0
// signature= func(__libc_csu_fini, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? __libc_csu_fini(???)
{
  return InitValue(initial_value_of_eax);
}

// addr = 08048698.0
// signature= func(__do_global_ctors_aux, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? __do_global_ctors_aux(???)
{
  reg_var2 = g_0x0804970c;
  if(reg_var2  !=  -1) {
    reg_var1 = 134518540;
    do {
      (void) intern_redirectCall(reg_var2);
      reg_var2 = LOAD(reg_var1 + -4);
      reg_var1 += -4;
    } while(reg_var2  !=  -1);
  }
  return InitValue(initial_value_of_edx);
}

// addr = 080486c0.0
// signature= func(_fini, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? _fini(???)
{
  (void) F_080486ca();
  (void) __do_global_dtors_aux();
  return InitValue(initial_value_of_ebx);
}

// addr = 080486ca.0
// signature= func(F_080486ca, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_080486ca(???)
{
  (void) __do_global_dtors_aux();
  return ARG_0;
}


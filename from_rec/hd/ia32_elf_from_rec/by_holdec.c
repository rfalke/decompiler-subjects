// addr = 080484a0.0
// signature= func(_init, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? _init(???)
{
  reg_result = __do_global_ctors_aux();
  return reg_result;
}

// addr = 08048620.0
// signature= func(__do_global_dtors_aux, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? __do_global_dtors_aux(???)
{
  reg_result = InitValue(initial_value_of_eax);
  reg_var1 = 134519288;
  if(g_0x080499f8  !=  0) {
    do {
      reg_result = intern_redirectCall(LOAD(reg_var1));
      reg_var1 += 4;
    } while(LOAD(reg_var1)  !=  0);
  }
  return reg_result;
}

// addr = 08048650.0
// signature= func(fini_dummy, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? fini_dummy(???)
{
  return InitValue(initial_value_of_eax);
}

// addr = 08048660.0
// signature= func(dumpline, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? dumpline(???)
{
  (void) STORE(local + 104, InitValue(initial_value_of_ebp));
  (void) STORE(local + 12, InitValue(initial_value_of_ebx));
  (void) STORE(local + 4, 134515144);
  (void) STORE(local + 8, ARG_1);
  (void) STORE(local, local + 24);
  (void) sprintf();
  if(ARG_2  >  16) {
    (void) STORE(&ARG_2, 16);
  }
  (void) STORE(local + 20, 0);
  while(LOAD(local + 20)  <  ARG_2) {
    (void) STORE(local + 4, 134515151);
    (void) STORE(local + 8, UNSIGNED_EXTEND(LOAD(LOAD(local + 20) + ARG_0)));
    (void) STORE(local, LOAD(local + 20) * 3 + local + 33);
    (void) sprintf();
    (void) STORE(local + 20, LOAD(local + 20) + 1);
  }
  while(1) {
    reg_ad = LOAD(local + 20);
    (void) STORE(local + 20, LOAD(local + 20) + 1);
    if(reg_ad  >  15) {
      break;
    }
    (void) STORE(local + 4, local + 24);
    (void) STORE(local + 8, 134515158);
    (void) strcat();
  }
  (void) STORE(local + 8, local + 24);
  reg_ac = strlen();
  (void) STORE(local + 16, reg_ac);
  (void) STORE(local + 4, reg_ac + local + 24);
  (void) STORE(local + 8, 134515162);
  (void) strcpy();
  (void) STORE(local + 20, 0);
  while(LOAD(local + 20)  <  ARG_2) {
    reg_ae = LOAD(local + 16) + LOAD(local + 20);
    reg_ab = LOAD(LOAD(local + 20) + ARG_0)  <=  31 || LOAD(LOAD(local + 20) + ARG_0)  >  126 ? 46 : LOAD(LOAD(local + 20) + ARG_0);
    (void) STORE(reg_ae + local + 24, reg_ab);
    (void) STORE(local + 20, LOAD(local + 20) + 1);
  }
  for(...) {
    // state = PRELIMINARY
    while(LOAD(local + 20)  <=  15) {
      (void) STORE(LOAD(local + 16) + LOAD(local + 20) + local + 24, 32);
      (void) STORE(local + 20, LOAD(local + 20) + 1);
    }
  }
  (void) STORE(local + 4, LOAD(local + 16) + LOAD(local + 20) + local + 24);
  (void) STORE(local + 8, 134515166);
  (void) strcpy();
  (void) STORE(local + 4, 134515168);
  (void) STORE(local + 8, local + 24);
  reg_result = printf();
  return reg_result;
}

// addr = 080488e0.0
// signature= func(main, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? main(???)
{
  reg_result = 0;
  reg_var1 = 1;
  while(reg_var1  <  ARG_0) {
    reg_ab = hexdump();
    reg_result += reg_ab;
    reg_var1++;
  }
  return reg_result;
}

// addr = 08048950.0
// signature= func(stat, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? stat(???)
{
  reg_result = _xstat();
  return reg_result;
}

// addr = 08048980.0
// signature= func(__do_global_ctors_aux, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? __do_global_ctors_aux(???)
{
  reg_result = InitValue(initial_value_of_eax);
  reg_var1 = 134519276;
  if(g_0x080499ec  !=  -1) {
    do {
      reg_result = intern_redirectCall(LOAD(reg_var1));
      reg_var1 += -4;
    } while(LOAD(reg_var1)  !=  -1);
  }
  return reg_result;
}

// addr = 080489b0.0
// signature= func(init_dummy, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? init_dummy(???)
{
  return InitValue(initial_value_of_eax);
}

// addr = 080489c0.0
// signature= func(_fini, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? _fini(???)
{
  reg_result = __do_global_dtors_aux();
  return reg_result;
}


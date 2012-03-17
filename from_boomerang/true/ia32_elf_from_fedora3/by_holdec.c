// addr = 080488bc.0
// signature= func(F_080488bc, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_080488bc(???)
{
  (void) F_08048ae4();
  (void) F_08048b3c();
  reg_result = F_0804a0d0();
  return reg_result;
}

// addr = 08048ac0.0
// signature= func(F_08048ac0, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_08048ac0(???)
{
  reg_aa = LOAD(InitStackPointer);
  (void) STORE(InitStackPointer, InitValue(initial_value_of_eax));
  (void) STORE(local + 12, reg_aa);
  (void) STORE(local + 16, &ARG_0);
  (void) STORE(local + 20, 134520840);
  (void) STORE(local + 24, 134520924);
  (void) STORE(local + 28, InitValue(initial_value_of_edx));
  (void) STORE(local + 32, local + 32);
  (void) STORE(local + 8, 134515786);
  (void) F_080489c4();
  asm("l.hlt");
  (void) STORE(local + 4, 0);
  (void) STORE(local, InitValue(initial_value_of_ebx));
  (void) F_08048aed();
  reg_ab = LOAD(local);
  (void) STORE(local, InitValue(initial_value_of_edx));
  if(LOAD(reg_ab + 11867)  !=  0) {
    (void) intern_redirectCall(LOAD(reg_ab + 11867));
  }
  return LOAD(local);
}

// addr = 08048ae4.0
// signature= func(F_08048ae4, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_08048ae4(???)
{
  (void) F_08048aed();
  if(LOAD(InitValue(initial_value_of_ebx) + 11867)  !=  0) {
    (void) intern_redirectCall(LOAD(InitValue(initial_value_of_ebx) + 11867));
  }
  return InitValue(initial_value_of_edx);
}

// addr = 08048aed.0
// signature= func(F_08048aed, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_08048aed(???)
{
  reg_aa = LOAD(InitStackPointer);
  (void) STORE(InitStackPointer, InitValue(initial_value_of_edx));
  if(LOAD(reg_aa + 11867)  !=  0) {
    (void) intern_redirectCall(LOAD(reg_aa + 11867));
  }
  return LOAD(InitStackPointer);
}

// addr = 08048b08.0
// signature= func(F_08048b08, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_08048b08(???)
{
  reg_result = InitValue(initial_value_of_eax);
  if(LOAD(&g_0x0804ba00)  ==  0) {
    while(1) {
      reg_result = g_0x0804b9d4;
      reg_ad = LOAD(reg_result);
      if(LOAD(reg_result)  ==  0) {
        break;
      }
      (void) STORE(&g_0x0804b9d4, reg_result + 4);
      (void) intern_redirectCall(reg_ad);
    }
    (void) STORE(&g_0x0804ba00, 1);
  }
  return reg_result;
}

// addr = 08048b3c.0
// signature= func(F_08048b3c, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_08048b3c(???)
{
  reg_result = g_0x0804b83c;
  if(reg_result  !=  0) {
    reg_result = 0;
    if(reg_result  !=  0) {
      reg_result = intern_redirectCall(reg_result);
    }
  }
  return reg_result;
}

// addr = 08048d64.0
// signature= func(F_08048d64, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_08048d64(???)
{
  return InitValue(initial_value_of_eax);
}

// addr = 08048d81.0
// signature= func(close_stdout, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? close_stdout(???)
{
  (void) F_08048d64();
  reg_var1 = BIT_TO_INT(BIT_TEST(31, BIT_TO_INT(BIT_TEST(31, (LOAD(LOAD(LOAD(InitValue(initial_value_of_ebx) + 11188))) / 32 & 1) + -1) || BIT_TEST(31, LOAD(LOAD(LOAD(InitValue(initial_value_of_ebx) + 11188))) / 32 & 1)) * -1)) * -1;
  if(reg_var1  ==  0) {
    reg_var2 = 1;
  } else {
    reg_result = F_080488e4();
    if(reg_result  ==  0) {
      reg_var2 = 0;
    } else {
      reg_var2 = 1;
    }
  }
  if(reg_var2  !=  0) {
    reg_result = F_08048a14();
    if(reg_result  !=  0) {
      reg_result = F_08048964();
      reg_var1 = LOAD(reg_result);
    }
    if(reg_var1  notSigned  0) {
      (void) F_08048934();
      if(LOAD(InitValue(initial_value_of_ebx) + 11384)  ==  0) {
        reg_result = F_08048a94();
      } else {
        (void) F_08049a8b();
        reg_result = F_08048a94();
      }
    }
  }
  return reg_result;
}

// addr = 08048e5f.0
// signature= func(F_08048e5f, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_08048e5f(???)
{
  return InitValue(initial_value_of_eax);
}

// addr = 08048f36.0
// signature= func(F_08048f36, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_08048f36(???)
{
  (void) F_08048d64();
  reg_ag = UNSIGNED_EXTEND(LOAD(&ARG_1));
  reg_var2 = UNSIGNED_EXTEND(NARROW(UNSIGNED_EXTEND(LOAD(&ARG_1))) / 32) * 4 + ARG_0 + 4;
  if(ARG_0  ==  0) {
    reg_var2 = InitValue(initial_value_of_ebx) + UNSIGNED_EXTEND(NARROW(UNSIGNED_EXTEND(LOAD(&ARG_1))) / 32) * 4 + 11235;
    reg_var1 = LOAD(reg_var2);
  } else {
    reg_var1 = LOAD(reg_var2);
  }
  (void) STORE(reg_var2, reg_var1 ^ (ARG_2 & 1 ^ reg_var1 >> (NARROW(UNSIGNED_EXTEND(LOAD(&ARG_1))) & 31) & 1) << (NARROW(UNSIGNED_EXTEND(LOAD(&ARG_1))) & 31));
  return reg_var1 >> (NARROW(reg_ag) & 31) & 1;
}

// addr = 08048fa3.0
// signature= func(F_08048fa3, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_08048fa3(???)
{
  (void) F_08048d64();
  reg_ac = F_08048934();
  reg_result = reg_ac;
  if((InitValue(initial_value_of_edx) & 0xffffff00 & WIDEN(BIT_TO_INT(InitValue(initial_value_of_edx)  ==  6)) | WIDEN(BIT_TO_INT(reg_ac  ==  InitValue(initial_value_of_eax))) & WIDEN(BIT_TO_INT(InitValue(initial_value_of_edx)  ==  6)))  !=  0) {
    reg_result = InitValue(initial_value_of_ebx) + 5590;
  }
  return reg_result;
}

// addr = 080496c3.0
// signature= func(F_080496c3, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_080496c3(???)
{
  (void) F_08048d64();
  reg_ab = F_08048964();
  reg_ac = LOAD(reg_ab);
  reg_result = F_08048ff6();
  (void) STORE(reg_ab, reg_ac);
  return reg_result;
}

// addr = 08049905.0
// signature= func(F_08049905, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_08049905(???)
{
  ASSERT UNDEF  !=  0;
  (void) STORE(local + 48, InitValue(initial_value_of_esi));
  (void) STORE(local + 52, InitValue(initial_value_of_edi));
  (void) STORE(local + 56, InitValue(initial_value_of_ebp));
  (void) STORE(local, InitValue(initial_value_of_edx));
  (void) intern_memfillL(local + 4, 0, 8);
  (void) STORE(InitValue(initial_value_of_eax) + 12, LOAD(local + 12));
  (void) STORE(InitValue(initial_value_of_eax) + 16, LOAD(local + 16));
  (void) STORE(InitValue(initial_value_of_eax) + 20, LOAD(local + 20));
  (void) STORE(InitValue(initial_value_of_eax) + 24, LOAD(local + 24));
  (void) STORE(InitValue(initial_value_of_eax) + 28, LOAD(local + 28));
  (void) STORE(InitValue(initial_value_of_eax) + 32, LOAD(local + 32));
  (void) STORE(InitValue(initial_value_of_eax) + 4, LOAD(local + 4));
  (void) STORE(InitValue(initial_value_of_eax) + 8, LOAD(local + 8));
  (void) STORE(InitValue(initial_value_of_eax), LOAD(local));
  return InitValue(initial_value_of_eax);
}

// addr = 0804995f.0
// signature= func(F_0804995f, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_0804995f(???)
{
  (void) STORE(local + 68, InitValue(initial_value_of_esi));
  (void) STORE(local + 72, InitValue(initial_value_of_ebp));
  (void) F_08049905();
  (void) STORE(local + 4, local + 16);
  (void) STORE(local, 0xffff);
  reg_result = F_08049721();
  return reg_result;
}

// addr = 080499f0.0
// signature= func(F_080499f0, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_080499f0(???)
{
  (void) STORE(local + 64, InitValue(initial_value_of_ebx));
  (void) STORE(local + 68, InitValue(initial_value_of_esi));
  (void) STORE(local + 72, InitValue(initial_value_of_ebp));
  (void) F_08048d64();
  reg_aa = SIGNED_EXTEND(LOAD(&ARG_1));
  (void) STORE(local + 16, LOAD(InitValue(initial_value_of_ebx) + 8486));
  (void) STORE(local + 20, LOAD(InitValue(initial_value_of_ebx) + 8490));
  (void) STORE(local + 24, LOAD(InitValue(initial_value_of_ebx) + 8494));
  (void) STORE(local + 28, LOAD(InitValue(initial_value_of_ebx) + 8498));
  (void) STORE(local + 32, LOAD(InitValue(initial_value_of_ebx) + 8502));
  (void) STORE(local + 36, LOAD(InitValue(initial_value_of_ebx) + 8506));
  (void) STORE(local + 40, LOAD(InitValue(initial_value_of_ebx) + 8510));
  (void) STORE(local + 44, LOAD(InitValue(initial_value_of_ebx) + 8514));
  reg_ac = LOAD(InitValue(initial_value_of_ebx) + 8518);
  (void) STORE(local + 4, reg_aa);
  (void) STORE(local + 48, reg_ac);
  (void) STORE(local + 8, 1);
  (void) STORE(local, local + 16);
  (void) F_08048f36();
  (void) STORE(local + 4, local + 16);
  (void) STORE(local, 0xffff);
  reg_result = F_08049721();
  return reg_result;
}

// addr = 08049a8b.0
// signature= func(F_08049a8b, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_08049a8b(???)
{
  (void) F_08048d64();
  reg_result = F_080499f0();
  return reg_result;
}

// addr = 08049ccd.0
// signature= func(F_08049ccd, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_08049ccd(???)
{
  (void) F_08048d64();
  reg_result = F_08049ac0();
  return reg_result;
}

// addr = 08049fe0.0
// signature= func(F_08049fe0, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_08049fe0(???)
{
  (void) F_08048d64();
  reg_result = ARG_0;
  if(reg_result  !=  0) {
    reg_result = F_08048a64();
  }
  return reg_result;
}

// addr = 0804a016.0
// signature= func(F_0804a016, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_0804a016(???)
{
  reg_ae = LOAD(InitStackPointer);
  (void) F_080488bc();
  reg_var1 = 0;
  reg_result = 0;
  (void) STORE(InitValue(initial_value_of_ebp) + -16, reg_ae + 6166);
  if(reg_var1  <  reg_result) {
    do {
      reg_result = intern_redirectCall(LOAD(reg_var1 * 4 + reg_ae + 6166));
      reg_var1++;
    } while(reg_var1  <  (LOAD(InitValue(initial_value_of_ebp) + -16) + reg_ae * -1 + -6166) / 4);
  }
  return reg_result;
}

// addr = 0804a067.0
// signature= func(F_0804a067, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_0804a067(???)
{
  reg_af = LOAD(InitStackPointer);
  reg_var1 = -1;
  while(reg_var1  !=  -1) {
    (void) intern_redirectCall(LOAD(reg_var1 * 4 + reg_af + 6085));
    reg_var1--;
  }
  reg_result = F_0804a0f4();
  return reg_result;
}

// addr = 0804a0a0.0
// signature= func(F_0804a0a0, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_0804a0a0(???)
{
  (void) F_0804a0a9();
  reg_result = F_08048954();
  return reg_result;
}

// addr = 0804a0a9.0
// signature= func(F_0804a0a9, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_0804a0a9(???)
{
  reg_var1 = 0;
  if(LOAD(LOAD(InitStackPointer) + 6283)  !=  0) {
    reg_var1 = LOAD(LOAD(LOAD(InitStackPointer) + 6283));
  }
  (void) STORE(InitStackPointer, reg_var1);
  reg_result = F_08048954();
  return reg_result;
}

// addr = 0804a0d0.0
// signature= func(F_0804a0d0, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_0804a0d0(???)
{
  reg_var1 = 134527020;
  reg_var2 = g_0x0804b82c;
  while(reg_var2  !=  -1) {
    reg_var1 += -4;
    (void) intern_redirectCall(reg_var2);
    reg_var2 = LOAD(reg_var1);
  }
  return InitValue(initial_value_of_edx);
}

// addr = 0804a0f4.0
// signature= func(F_0804a0f4, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_0804a0f4(???)
{
  (void) F_0804a0fd();
  reg_result = F_08048b08();
  return reg_result;
}

// addr = 0804a0fd.0
// signature= func(F_0804a0fd, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_0804a0fd(???)
{
  (void) STORE(InitStackPointer, InitValue(initial_value_of_eax));
  reg_result = F_08048b08();
  return reg_result;
}


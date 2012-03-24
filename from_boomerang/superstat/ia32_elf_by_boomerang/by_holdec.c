// Decompiled by holdec 1.1 (2012-03-24)

/* The decompilation of 0x0804827c / __xstat failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

/* The decompilation of 0x0804829c / printf failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

// addr = 080482da.0
// signature= func(F_080482da, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_080482da(???)
{
  reg_result = LOAD(LOAD(InitStackPointer) + 5034);
  if(reg_result  !=  0) {
    reg_result = intern_redirectCall(reg_result);
  }
  return reg_result;
}

// addr = 0804835c.0
// signature= func(main, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? main(???)
{
  (void) STORE(local + 12, InitValue(initial_value_of_ecx));
  (void) STORE(local + 120, InitValue(initial_value_of_ebp));
  (void) STORE(local + 4, LOAD(ARG_1 + 4));
  (void) STORE(local + 8, local + 16);
  (void) STORE(local, 3);
  reg_aa = __xstat();
  (void) STORE(local + 4, reg_aa);
  (void) STORE(local, 134513920);
  (void) printf();
  (void) STORE(local + 4, LOAD(local + 16));
  (void) STORE(local + 8, LOAD(local + 20));
  (void) STORE(local, 134513978);
  (void) printf();
  (void) STORE(local + 4, LOAD(local + 28));
  (void) STORE(local, 134513929);
  (void) printf();
  (void) STORE(local + 4, LOAD(local + 32));
  (void) STORE(local, 134513938);
  (void) printf();
  (void) STORE(local + 4, LOAD(local + 36));
  (void) STORE(local, 134513948);
  (void) printf();
  (void) STORE(local + 4, LOAD(local + 40));
  (void) STORE(local, 134513959);
  (void) printf();
  (void) STORE(local + 4, LOAD(local + 44));
  (void) STORE(local, 134513968);
  (void) printf();
  (void) STORE(local + 4, LOAD(local + 48));
  (void) STORE(local + 8, LOAD(local + 52));
  (void) STORE(local, 134513977);
  (void) printf();
  (void) STORE(local + 4, LOAD(local + 60));
  (void) STORE(local, 134513990);
  (void) printf();
  (void) STORE(local + 4, LOAD(local + 64));
  (void) STORE(local, 134513987);
  (void) printf();
  (void) STORE(local + 4, LOAD(local + 68));
  (void) STORE(local, 134514000);
  (void) printf();
  (void) STORE(local + 4, LOAD(local + 72));
  (void) STORE(local, 134514012);
  (void) printf();
  (void) STORE(local + 4, LOAD(local + 80));
  (void) STORE(local, 134514023);
  (void) printf();
  (void) STORE(local + 4, LOAD(local + 88));
  (void) STORE(local, 134514034);
  (void) printf();
  return 0;
}

// addr = 080484e6.0
// signature= func(F_080484e6, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_080484e6(???)
{
  reg_result = __do_global_dtors_aux();
  return reg_result;
}


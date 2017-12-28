// Decompiled by holdec

// address: 08048450.0
// full-signature: func(main, return=[<int(signed, 4),null,unknown>], parameter=[<int(signed, 4),argc,unknown>, <ptr(ptr(int(undef, 1))),argv,unknown>], varargs=false)
s4 main(s4 argc, d1** argv)
{
  if(argc <= 1) {
    reg_result = 1;
  } else {
    reg_aa = fopen(LOAD(argv + 4), "r");
    reg_result = 1;
    if(reg_aa != 0) {
      reg_ac = fgets(&buffer, 0x400, reg_aa);
      if(reg_ac != 0) {
        reg_ad = strchr(reg_ac, 10);
        if(reg_ad != 0) {
          (void) STORE(reg_ad, 0);
        }
        (void) puts(&buffer);
      }
      reg_result = fclose(reg_aa);
    }
  }
  return reg_result;
}

// address: 080484f0.0
// full-signature: func(chomp, return=[<ptr(int(undef, 1)),null,unknown>], parameter=[<ptr(int(undef, 1)),s,unknown>, <int(signed, 4),size,unknown>, <ptr(int(undef, 1)),f,unknown>], varargs=false)
d1* chomp(d1* s, s4 size, d1* f)
{
  reg_result = fgets(s, size, f);
  if(reg_result != 0) {
    reg_ab = strchr(reg_result, 10);
    if(reg_ab != 0) {
      (void) STORE(reg_ab, 0);
    }
  }
  return reg_result;
}


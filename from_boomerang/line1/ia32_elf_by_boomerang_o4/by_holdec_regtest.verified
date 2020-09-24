// Decompiled by holdec

// address: 08048450.0
// full-signature: func(main, return=[<int(signed, 4),null,unknown>], parameter=[<int(signed, 4),argc,unknown>, <ptr(ptr(int(undef, 1))),argv,unknown>], varargs=false)
s4 main(s4 argc, d1** argv)
{
  if(argc < 2) {
    reg_result = 1;
  } else {
    reg_a = fopen(LOAD(argv + 4), "r");
    reg_result = 1;
    if(reg_a != 0) {
      reg_c = fgets(&buffer, 0x400, reg_a);
      if(reg_c != 0) {
        reg_d = strchr(reg_c, 10);
        if(reg_d != 0) {
          (void) STORE(reg_d, 0);
        }
        (void) puts(&buffer);
      }
      reg_result = fclose(reg_a);
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
    reg_b = strchr(reg_result, 10);
    if(reg_b != 0) {
      (void) STORE(reg_b, 0);
    }
  }
  return reg_result;
}


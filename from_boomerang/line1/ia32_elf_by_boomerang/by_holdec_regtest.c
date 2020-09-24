// Decompiled by holdec

// address: 08048454.0
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

// address: 080484a3.0
// full-signature: func(main, return=[<int(signed, 4),null,unknown>], parameter=[<int(signed, 4),argc,unknown>, <ptr(ptr(int(undef, 1))),argv,unknown>], varargs=false)
s4 main(s4 argc, d1** argv)
{
  reg_result = InitValue(initial_value_of_reg_28_local);
  if(argc > 1) {
    reg_b = fopen(LOAD(argv + 4), "r");
    if(reg_b == 0) {
      reg_result = 1;
    } else {
      reg_d = chomp(&buffer, 0x400, reg_b);
      if(reg_d != 0) {
        (void) printf("%s\n", &buffer);
      }
      (void) fclose(reg_b);
    }
  } else {
    reg_result = 1;
  }
  return reg_result;
}


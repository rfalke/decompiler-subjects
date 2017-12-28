// Decompiled by holdec

// address: 08048918.0
// full-signature: func(main, return=[<int(signed, 4),null,unknown>], parameter=[<int(signed, 4),argc,unknown>, <ptr(ptr(int(undef, 1))),argv,unknown>], varargs=false)
s4 main(s4 argc, d1** argv)
{
  if(argc < 2 || argc > 7) {
    reg_var1 = 134517890;
  } else if(argc < 3 || argc > 7) {
    reg_var1 = 134517848;
  } else if(argc == 3) {
    reg_var1 = 134517854;
  } else if(argc == 4) {
    reg_var1 = 134517862;
  } else if(argc == 5) {
    reg_var1 = 134517869;
  } else if(argc == 6) {
    reg_var1 = 134517876;
  } else {
    reg_var1 = 134517882;
  }
  (void) printf(reg_var1);
  return 0;
}


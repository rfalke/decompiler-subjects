// Decompiled by holdec

// address: 0804837c.0
// full-signature: func(main, return=[<int(signed, 4),null,unknown>], parameter=[<int(signed, 4),argc,unknown>, <ptr(ptr(int(undef, 1))),argv,unknown>], varargs=false)
s4 main(s4 argc, d1** argv)
{
  if(argc > 7 || argc < 2 && argc > 7 || argc < 2 && argc < 5) {
    (void) puts("Other!");
  } else if(argc == 2) {
    (void) puts("Two!");
  } else if(argc == 2 || argc == 3) {
    (void) puts("Three!");
  } else if(argc == 5) {
    (void) puts("Five!");
  } else if(argc == 6) {
    (void) puts("Six!");
  } else if(argc > 4 && argc < 8) {
    (void) puts("Seven!");
  } else {
    (void) puts("Four!");
  }
  return 0;
}


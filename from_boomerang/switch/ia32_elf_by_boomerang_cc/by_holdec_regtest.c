// Decompiled by holdec

// address: 080488f0.0
// full-signature: func(main, return=[<int(signed, 4),null,unknown>], parameter=[<int(signed, 4),argc,unknown>, <ptr(ptr(int(undef, 1))),argv,unknown>], varargs=false)
s4 main(s4 argc, d1** argv)
{
  if(argc < 2 || argc > 7) {
    (void) printf("Other!\n");
  } else if(argc == 2) {
    (void) printf("Two!\n");
  } else if(argc == 3) {
    (void) printf("Three!\n");
  } else if(argc == 4) {
    (void) printf("Four!\n");
  } else if(argc == 5) {
    (void) printf("Five!\n");
  } else if(argc == 6) {
    (void) printf("Six!\n");
  } else {
    (void) printf("Seven!\n");
  }
  return 0;
}


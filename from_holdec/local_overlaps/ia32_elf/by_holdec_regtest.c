// Decompiled by holdec

// address: 080491d0.0
// full-signature: func(test1, return=[<int(undef, 4),null,reg[eax]>], parameter=[], varargs=false)
d4 test1(void)
{
  (void) puts("1) init with bytes, 4 byte read (should=0x60504030)");
  (void) dump1(1615872048);
  return 0;
}

// address: 08049240.0
// full-signature: func(test2, return=[<int(undef, 4),null,reg[eax]>], parameter=[], varargs=false)
d4 test2(void)
{
  (void) puts("2) init with bytes, 2 byte extra write, 4 byte read (should=0x61514030)");
  (void) dump1(1632714800);
  return 0;
}

// address: 080492c0.0
// full-signature: func(test3, return=[<int(undef, 4),null,reg[eax]>], parameter=[], varargs=false)
d4 test3(void)
{
  (void) puts("3) init with bytes, 2 byte extra write, 4 byte extra write, 4 byte read (should=0x62514030)");
  (void) dump1(1649492016);
  return 0;
}

// address: 08049340.0
// full-signature: func(test4, return=[<int(undef, 4),null,reg[eax]>], parameter=[], varargs=false)
d4 test4(void)
{
  (void) STORE(local + 20, 134521060);
  (void) puts("4) init with bytes, address of taken, 4 byte read (should=0x60504030)");
  (void) STORE(local + 8, 16);
  (void) STORE(local + 9, 32);
  (void) STORE(local + 10, 48);
  (void) STORE(local + 11, 64);
  (void) STORE(local + 12, 80);
  (void) STORE(local + 13, 96);
  (void) STORE(local + 14, 112);
  (void) STORE(local + 15, -128);
  (void) STORE(local + 16, -112);
  (void) STORE(local + 17, -96);
  (void) STORE(local + 18, -80);
  (void) STORE(local + 19, -64);
  (void) STORE(local + 20, -48);
  (void) STORE(local + 21, -32);
  (void) STORE(local + 4, LOAD(local + 10));
  (void) STORE(local + 22, -16);
  (void) STORE(local, local + 4);
  (void) dump2(local + 4, LOAD(local + 10));
  return 0;
}

// address: 080493b0.0
// full-signature: func(test5, return=[<int(undef, 4),null,reg[eax]>], parameter=[], varargs=false)
d4 test5(void)
{
  (void) STORE(local + 16, 134521130);
  (void) puts("5) init with bytes, address of taken BEFORE and modify, 4 byte read (should=0x60524030)");
  (void) STORE(local + 4, 16);
  (void) STORE(local + 5, 32);
  (void) STORE(local + 6, 48);
  (void) STORE(local + 7, 64);
  (void) STORE(local + 8, 80);
  (void) STORE(local + 9, 96);
  (void) STORE(local + 10, 112);
  (void) STORE(local + 11, -128);
  (void) STORE(local + 12, -112);
  (void) STORE(local + 13, -96);
  (void) STORE(local + 14, -80);
  (void) STORE(local + 15, -64);
  (void) STORE(local + 16, -48);
  (void) STORE(local + 17, -32);
  (void) STORE(local + 18, -16);
  (void) STORE(local, local + 8);
  (void) modify(local + 8);
  (void) STORE(local, LOAD(local + 6));
  (void) dump1(LOAD(local + 6));
  return 0;
}

// address: 08049430.0
// full-signature: func(test6, return=[<int(undef, 4),null,reg[eax]>], parameter=[], varargs=false)
d4 test6(void)
{
  (void) puts("6) init with bytes, 2 byte extra write, double 2 byte modify, 4 byte read (should=0x61514230)");
  (void) dump1(1632715312);
  return 0;
}


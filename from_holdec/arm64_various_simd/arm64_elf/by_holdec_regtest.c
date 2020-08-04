// Decompiled by holdec

// address: 00000ab0.0
// full-signature: func(modify1, return=[], parameter=[<ptr(int(undef, 1)),high,reg[x0]>, <ptr(int(undef, 1)),low,reg[x1]>, <ptr(int(undef, 1)),buffer,reg[x2]>], varargs=false)
void modify1(d1* high, d1* low, d1* buffer)
{
  (void) STORE(buffer, 84945976605629780007363850565027102720);
  (void) STORE(high, 4604930618986332160);
  (void) STORE(low, 4604930618986332160);
}

// address: 00000ad4.0
// full-signature: func(modify2, return=[], parameter=[<ptr(int(undef, 1)),high,reg[x0]>, <ptr(int(undef, 1)),low,reg[x1]>, <ptr(int(undef, 1)),buffer,reg[x2]>], varargs=false)
void modify2(d1* high, d1* low, d1* buffer)
{
  (void) STORE(buffer, 84073670752970855836923514983534297088);
  (void) STORE(high, 4557642823960100864);
  (void) STORE(low, 4557642823960100864);
}

// address: 00000af8.0
// full-signature: func(modify3, return=[], parameter=[<ptr(int(undef, 1)),high,reg[x0]>, <ptr(int(undef, 1)),low,reg[x1]>, <ptr(int(undef, 1)),buffer,reg[x2]>], varargs=false)
void modify3(d1* high, d1* low, d1* buffer)
{
  (void) STORE(buffer, 85972805223963759228432005845789536420);
  (void) STORE(high, 4660595109924731617);
  (void) STORE(low, 4652758847580893348);
}

// address: 00000b50.0
// full-signature: func(modify4, return=[], parameter=[<ptr(int(undef, 1)),high,reg[x0]>, <ptr(int(undef, 1)),low,reg[x1]>, <ptr(int(undef, 1)),buffer,reg[x2]>], varargs=false)
void modify4(d1* high, d1* low, d1* buffer)
{
  reg_aa = WIDEN(WIDEN(WIDEN(FLOATBITS_TO_INT(INT_TO_FLOATBITS(2) + INT_TO_FLOATBITS(64))) * 256 | WIDEN(FLOATBITS_TO_INT(INT_TO_FLOATBITS(0x91) + INT_TO_FLOATBITS(0x2)))) * 65536 | WIDEN(WIDEN(FLOATBITS_TO_INT(INT_TO_FLOATBITS(235) + INT_TO_FLOATBITS(2))) * 256 | WIDEN(FLOATBITS_TO_INT(INT_TO_FLOATBITS(0x85) + INT_TO_FLOATBITS(0x2))))) * 4294967296 | WIDEN(WIDEN(WIDEN(FLOATBITS_TO_INT(INT_TO_FLOATBITS(2) + INT_TO_FLOATBITS(63))) * 256 | WIDEN(FLOATBITS_TO_INT(INT_TO_FLOATBITS(0x9d) + INT_TO_FLOATBITS(0x2)))) * 65536 | WIDEN(WIDEN(FLOATBITS_TO_INT(INT_TO_FLOATBITS(112) + INT_TO_FLOATBITS(2))) * 256 | WIDEN(FLOATBITS_TO_INT(INT_TO_FLOATBITS(0xa4) + INT_TO_FLOATBITS(0x2)))));
  reg_ab = WIDEN(WIDEN(WIDEN(FLOATBITS_TO_INT(INT_TO_FLOATBITS(2) + INT_TO_FLOATBITS(64))) * 256 | WIDEN(FLOATBITS_TO_INT(INT_TO_FLOATBITS(0xad) + INT_TO_FLOATBITS(0x2)))) * 65536 | WIDEN(WIDEN(FLOATBITS_TO_INT(INT_TO_FLOATBITS(194) + INT_TO_FLOATBITS(2))) * 256 | WIDEN(FLOATBITS_TO_INT(INT_TO_FLOATBITS(0x8f) + INT_TO_FLOATBITS(0x2))))) * 4294967296 | WIDEN(WIDEN(WIDEN(FLOATBITS_TO_INT(INT_TO_FLOATBITS(2) + INT_TO_FLOATBITS(64))) * 256 | WIDEN(FLOATBITS_TO_INT(INT_TO_FLOATBITS(0xfc) + INT_TO_FLOATBITS(0x2)))) * 65536 | WIDEN(WIDEN(FLOATBITS_TO_INT(INT_TO_FLOATBITS(122) + INT_TO_FLOATBITS(2))) * 256 | WIDEN(FLOATBITS_TO_INT(INT_TO_FLOATBITS(0xe1) + INT_TO_FLOATBITS(0x2)))));
  (void) STORE(buffer, WIDEN(reg_ab) * 18446744073709551616 | WIDEN(reg_aa));
  (void) STORE(high, reg_ab);
  (void) STORE(low, reg_aa);
}

// address: 00000bb8.0
// full-signature: func(cmp_bytes, return=[], parameter=[<ptr(int(undef, 1)),high,reg[x0]>, <ptr(int(undef, 1)),low,reg[x1]>, <ptr(int(undef, 1)),buffer,reg[x2]>], varargs=false)
void cmp_bytes(d1* high, d1* low, d1* buffer)
{
  (void) STORE(buffer, -309485009821063593764782081);
  (void) STORE(high, -16777216);
  (void) STORE(low, 281474959998975);
}


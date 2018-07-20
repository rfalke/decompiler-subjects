// Decompiled by holdec

// address: 00400640.0
// full-signature: func(bfxil1, return=[<int(undef, 4),null,unknown>], parameter=[<int(undef, 4),ARG_1,reg[w0]>, <int(undef, 4),ARG_2,reg[w1]>], varargs=false)
d4 bfxil1(d4 ARG_1, d4 ARG_2)
{
  return ARG_1 & 0xfffffe00 | ARG_2 & 0x1ff;
}

// address: 00400648.0
// full-signature: func(bfxil2, return=[<int(undef, 4),null,unknown>], parameter=[<int(undef, 4),ARG_1,reg[w0]>, <int(undef, 4),ARG_2,reg[w1]>], varargs=false)
d4 bfxil2(d4 ARG_1, d4 ARG_2)
{
  return ARG_1 & 0xfffffe00 | ARG_2 / 32 & 0x1ff;
}

// address: 00400650.0
// full-signature: func(bfi, return=[<int(undef, 4),null,unknown>], parameter=[<int(undef, 4),ARG_1,reg[w0]>, <int(undef, 4),ARG_2,reg[w1]>], varargs=false)
d4 bfi(d4 ARG_1, d4 ARG_2)
{
  return ARG_1 & 0xffffc01f | (ARG_2 & 0x1ff) * 32;
}

// address: 00400658.0
// full-signature: func(ubfx, return=[<int(undef, 4),null,unknown>], parameter=[<int(undef, 4),ARG_1,reg[w0]>], varargs=false)
d4 ubfx(d4 ARG_1)
{
  return ARG_1 / 32 & 0x1ff;
}

// address: 00400660.0
// full-signature: func(ubfiz, return=[<int(undef, 4),null,unknown>], parameter=[<int(undef, 4),ARG_1,reg[w0]>], varargs=false)
d4 ubfiz(d4 ARG_1)
{
  return (ARG_1 & 0x1ff) * 32;
}

// address: 00400668.0
// full-signature: func(cbz, return=[<int(undef, 4),null,unknown>], parameter=[<int(undef, 4),ARG_1,reg[w0]>], varargs=false)
d4 cbz(d4 ARG_1)
{
  if(ARG_1 == 0) {
    (void) puts("is zero");
  } else {
    (void) printf("not null but %d\n", UNSIGNED_EXTEND(ARG_1));
  }
  return 0;
}

// address: 004006a4.0
// full-signature: func(tbnz, return=[<int(undef, 4),null,unknown>], parameter=[<int(undef, 4),ARG_1,reg[w0]>], varargs=false)
d4 tbnz(d4 ARG_1)
{
  if((ARG_1 & 0x200) == 0) {
    (void) puts("bit is zero");
  } else {
    (void) printf("bit set in %d\n", UNSIGNED_EXTEND(ARG_1));
  }
  return 0;
}

// address: 004006e0.0
// full-signature: func(bic, return=[<int(undef, 4),null,unknown>], parameter=[<int(undef, 4),ARG_1,reg[w0]>, <int(undef, 4),ARG_2,reg[w1]>], varargs=false)
d4 bic(d4 ARG_1, d4 ARG_2)
{
  return ~ARG_2 & ARG_1;
}

// address: 004006e8.0
// full-signature: func(eon, return=[<int(undef, 4),null,unknown>], parameter=[<int(undef, 4),ARG_1,reg[w0]>, <int(undef, 4),ARG_2,reg[w1]>], varargs=false)
d4 eon(d4 ARG_1, d4 ARG_2)
{
  return ~ARG_2 ^ ARG_1;
}

// address: 004006f0.0
// full-signature: func(orn, return=[<int(undef, 4),null,unknown>], parameter=[<int(undef, 4),ARG_1,reg[w0]>, <int(undef, 4),ARG_2,reg[w1]>], varargs=false)
d4 orn(d4 ARG_1, d4 ARG_2)
{
  return ~ARG_2 | ARG_1;
}


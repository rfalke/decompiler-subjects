// Decompiled by holdec

// address: 080495a0.0
// full-signature: func(i386_memset_forward_b, return=[<int(undef, 4),null,reg[eax]>], parameter=[<int(undef, 4),ARG_0,unknown>, <int(undef, 4),ARG_1,unknown>, <int(undef, 4),ARG_2,unknown>], varargs=false)
d4 i386_memset_forward_b(d4 ARG_0, d4 ARG_1, d4 ARG_2)
{
  (void) _holdec_memfillB4(ARG_0, LOAD(&ARG_1), ARG_2);
  return 0;
}

// address: 080495c0.0
// full-signature: func(i386_memset_forward_w, return=[<int(undef, 4),null,reg[eax]>], parameter=[<int(undef, 4),ARG_0,unknown>, <int(undef, 4),ARG_1,unknown>, <int(undef, 4),ARG_2,unknown>], varargs=false)
d4 i386_memset_forward_w(d4 ARG_0, d4 ARG_1, d4 ARG_2)
{
  (void) _holdec_memfillW4(ARG_0, LOAD(&ARG_1), ARG_2);
  return 0;
}

// address: 080495e0.0
// full-signature: func(i386_memset_forward_l, return=[<int(undef, 4),null,reg[eax]>], parameter=[<int(undef, 4),ARG_0,unknown>, <int(undef, 4),ARG_1,unknown>, <int(undef, 4),ARG_2,unknown>], varargs=false)
d4 i386_memset_forward_l(d4 ARG_0, d4 ARG_1, d4 ARG_2)
{
  (void) _holdec_memfillL4(ARG_0, ARG_1, ARG_2);
  return 0;
}

// address: 08049600.0
// full-signature: func(i386_memset_backward_b, return=[<int(undef, 4),null,reg[eax]>], parameter=[<int(undef, 4),ARG_0,unknown>, <int(undef, 4),ARG_1,unknown>, <int(undef, 4),ARG_2,unknown>], varargs=false)
d4 i386_memset_backward_b(d4 ARG_0, d4 ARG_1, d4 ARG_2)
{
  (void) _holdec_memfillB4(ARG_0 + ARG_2 * -1 + 1, LOAD(&ARG_1), ARG_2);
  return 0;
}

// address: 08049620.0
// full-signature: func(i386_memset_backward_w, return=[<int(undef, 4),null,reg[eax]>], parameter=[<int(undef, 4),ARG_0,unknown>, <int(undef, 4),ARG_1,unknown>, <int(undef, 4),ARG_2,unknown>], varargs=false)
d4 i386_memset_backward_w(d4 ARG_0, d4 ARG_1, d4 ARG_2)
{
  (void) _holdec_memfillW4(ARG_0 + ARG_2 * -2 + 2, LOAD(&ARG_1), ARG_2);
  return 0;
}

// address: 08049640.0
// full-signature: func(i386_memset_backward_l, return=[<int(undef, 4),null,reg[eax]>], parameter=[<int(undef, 4),ARG_0,unknown>, <int(undef, 4),ARG_1,unknown>, <int(undef, 4),ARG_2,unknown>], varargs=false)
d4 i386_memset_backward_l(d4 ARG_0, d4 ARG_1, d4 ARG_2)
{
  (void) _holdec_memfillL4(ARG_0 + ARG_2 * -4 + 4, ARG_1, ARG_2);
  return 0;
}

// address: 08049660.0
// full-signature: func(i386_memset_both_b, return=[<int(undef, 4),null,reg[eax]>], parameter=[<int(undef, 4),ARG_0,unknown>, <int(undef, 4),ARG_1,unknown>, <int(undef, 4),ARG_2,unknown>, <int(undef, 4),ARG_3,unknown>], varargs=false)
d4 i386_memset_both_b(d4 ARG_0, d4 ARG_1, d4 ARG_2, d4 ARG_3)
{
  if(ARG_3 == 0) {
    (void) _holdec_memfillB4(ARG_0, LOAD(&ARG_1), ARG_2);
  } else {
    (void) _holdec_memfillB4(ARG_0 + ARG_2 * -1 + 1, LOAD(&ARG_1), ARG_2);
  }
  return 0;
}

// address: 08049680.0
// full-signature: func(i386_memset_both_w, return=[<int(undef, 4),null,reg[eax]>], parameter=[<int(undef, 4),ARG_0,unknown>, <int(undef, 4),ARG_1,unknown>, <int(undef, 4),ARG_2,unknown>, <int(undef, 4),ARG_3,unknown>], varargs=false)
d4 i386_memset_both_w(d4 ARG_0, d4 ARG_1, d4 ARG_2, d4 ARG_3)
{
  if(ARG_3 == 0) {
    (void) _holdec_memfillW4(ARG_0, LOAD(&ARG_1), ARG_2);
  } else {
    (void) _holdec_memfillW4(ARG_0 + ARG_2 * -2 + 2, LOAD(&ARG_1), ARG_2);
  }
  return 0;
}

// address: 080496b0.0
// full-signature: func(i386_memset_both_l, return=[<int(undef, 4),null,reg[eax]>], parameter=[<int(undef, 4),ARG_0,unknown>, <int(undef, 4),ARG_1,unknown>, <int(undef, 4),ARG_2,unknown>, <int(undef, 4),ARG_3,unknown>], varargs=false)
d4 i386_memset_both_l(d4 ARG_0, d4 ARG_1, d4 ARG_2, d4 ARG_3)
{
  if(ARG_3 == 0) {
    (void) _holdec_memfillL4(ARG_0, ARG_1, ARG_2);
  } else {
    (void) _holdec_memfillL4(ARG_0 + ARG_2 * -4 + 4, ARG_1, ARG_2);
  }
  return 0;
}


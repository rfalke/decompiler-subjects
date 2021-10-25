// Decompiled by holdec

// address: 08049eb0.0
// full-signature: func(F2XM1, return=[<int(undef, 4),null,reg[eax]>], parameter=[], varargs=false)
d4 F2XM1(void)
{
  (void) printf("F2XM1(-1):   should=   -0.500000/  -5.000000e-01 is=%12f/%15e\n", -0.5, -0.5);
  (void) printf("F2XM1(0):    should=    0.000000/   0.000000e+00 is=%12f/%15e\n", 0.0, 0.0);
  (void) printf("F2XM1(+1):   should=    1.000000/   1.000000e+00 is=%12f/%15e\n", 1.0, 1.0);
  (void) printf("F2XM1(1/pi): should=    0.246869/   2.468690e-01 is=%12f/%15e\n", 0.24686898890063835, 0.24686898890063835);
  return 0;
}

// address: 08049f30.0
// full-signature: func(FABS, return=[<int(undef, 4),null,reg[eax]>], parameter=[<int(undef, 4),ARG_0,unknown>], varargs=false)
d4 FABS(d4 ARG_0)
{
  (void) printf("FABS(para):   should=                            is=%12f/%15e\n", NARROW(_holdec_floatAbs(WIDEN(LOAD(&ARG_0)))), NARROW(_holdec_floatAbs(WIDEN(LOAD(&ARG_0)))));
  (void) printf("FABS(-1):   should=     1.000000/   1.000000e+00 is=%12f/%15e\n", 1.0, 1.0);
  (void) printf("FABS(-0):    should=    0.000000/   0.000000e+00 is=%12f/%15e\n", 0.0, 0.0);
  (void) printf("FABS(+1):   should=     1.000000/   1.000000e+00 is=%12f/%15e\n", 1.0, 1.0);
  return 0;
}

// address: 08049fb0.0
// full-signature: func(FADD, return=[<int(undef, 4),null,reg[eax]>], parameter=[<int(undef, 4),ARG_0,unknown>], varargs=false)
d4 FADD(d4 ARG_0)
{
  (void) printf("FADD(para+1):     should=                             is=%12f/%15e\n", 1.0 + LOAD(&ARG_0), 1.0 + LOAD(&ARG_0));
  (void) printf("FADD(para+12.34): should=                             is=%12f/%15e\n", 12.34 + LOAD(&ARG_0), 12.34 + LOAD(&ARG_0));
  (void) printf("FADD(pi+1/pi):    should=    3.459903/   3.459903e+00 is=%12f/%15e\n", 3.4599025397735836, 3.4599025397735836);
  (void) printf("FADD(1+1+-0):     should=    2.000000/   2.000000e+00 is=%12f/%15e\n", 2.0, 2.0);
  (void) printf("FADD(pi+1000):    should= 1003.141593/   1.003142e+03 is=%12f/%15e\n", 1003.1415926535898, 1003.1415926535898);
  return 0;
}

// address: 0804a060.0
// full-signature: func(FBSTP, return=[<int(undef, 4),null,reg[eax]>], parameter=[], varargs=false)
d4 FBSTP(void)
{
  (void) _holdec_ia32_storeAsBcdInteger(-1.23456789011223344E17, buffer);
  (void) printf("FBSTP(%f) should=0x44 0x33 0x22 0x11 0x90 0x78 0x56 0x34 0x12 0x80 is=0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x\n", -1.23456789011223344E17, UNSIGNED_EXTEND(buffer), UNSIGNED_EXTEND(g_0x08050029), UNSIGNED_EXTEND(g_0x0805002a), UNSIGNED_EXTEND(g_0x0805002b), UNSIGNED_EXTEND(g_0x0805002c), UNSIGNED_EXTEND(g_0x0805002d), UNSIGNED_EXTEND(g_0x0805002e), UNSIGNED_EXTEND(g_0x0805002f), UNSIGNED_EXTEND(g_0x08050030), UNSIGNED_EXTEND(g_0x08050031));
  return 0;
}

// address: 0804a0e0.0
// full-signature: func(FBLD, return=[<int(undef, 4),null,reg[eax]>], parameter=[], varargs=false)
d4 FBLD(void)
{
  (void) printf("FBLD(0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x): should=-123456789088776656.000000/  -1.234568e+17 is=%12f/%15e\n", 85, 102, 119, 136, 144, 120, 86, 52, 18, 128, NARROW(_holdec_ia32_loadBcdInteger("")), NARROW(_holdec_ia32_loadBcdInteger("")));
  return 0;
}

// address: 0804a150.0
// full-signature: func(FCHS, return=[<int(undef, 4),null,reg[eax]>], parameter=[<int(undef, 4),ARG_0,unknown>], varargs=false)
d4 FCHS(d4 ARG_0)
{
  (void) printf("FCHS(para):  should=                             is=%12f/%15e\n", -LOAD(&ARG_0), -LOAD(&ARG_0));
  (void) printf("FCHS(pi):    should=   -3.141593/  -3.141593e+00 is=%12f/%15e\n", -3.141592653589793, -3.141592653589793);
  (void) printf("FCHS(0-pi):  should=    3.141593/   3.141593e+00 is=%12f/%15e\n", 3.141592653589793, 3.141592653589793);
  return 0;
}

// address: 0804a1b0.0
// full-signature: func(FCMOV, return=[<int(undef, 4),null,reg[eax]>], parameter=[<int(undef, 4),ARG_0,unknown>], varargs=false)
d4 FCMOV(d4 ARG_0)
{
  (void) printf("using EFLAGS=0x%0x\n", UNSIGNED_EXTEND(NARROW(ARG_0 / 256)));
  reg_a = CONSTRUCT(NAMED(s, NARROW(ARG_0 / 256) < 0), NAMED(z, BIT_TEST(6, NARROW(ARG_0 / 256))), NAMED(a, BIT_TEST(4, NARROW(ARG_0 / 256))), NAMED(p, BIT_TEST(2, NARROW(ARG_0 / 256))), NAMED(c, BIT_TEST(0, NARROW(ARG_0 / 256))));
  (void) printf("  FCMOV(below ? 1 : pi):           should=                             is=%12f/%15e\n", EXTRACT(reg_a, c) ? 1.0 : 3.141592653589793, EXTRACT(reg_a, c) ? 1.0 : 3.141592653589793);
  reg_b = CONSTRUCT(NAMED(s, NARROW(ARG_0 / 256) < 0), NAMED(z, BIT_TEST(6, NARROW(ARG_0 / 256))), NAMED(a, BIT_TEST(4, NARROW(ARG_0 / 256))), NAMED(p, BIT_TEST(2, NARROW(ARG_0 / 256))), NAMED(c, BIT_TEST(0, NARROW(ARG_0 / 256))));
  (void) printf("  FCMOV(equal ? 1 : pi):           should=                             is=%12f/%15e\n", EXTRACT(reg_b, z) ? 1.0 : 3.141592653589793, EXTRACT(reg_b, z) ? 1.0 : 3.141592653589793);
  reg_c = CONSTRUCT(NAMED(s, NARROW(ARG_0 / 256) < 0), NAMED(z, BIT_TEST(6, NARROW(ARG_0 / 256))), NAMED(a, BIT_TEST(4, NARROW(ARG_0 / 256))), NAMED(p, BIT_TEST(2, NARROW(ARG_0 / 256))), NAMED(c, BIT_TEST(0, NARROW(ARG_0 / 256))));
  (void) printf("  FCMOV(below_or_equal ? 1 : pi):  should=                             is=%12f/%15e\n", EXTRACT(reg_c, c) || EXTRACT(reg_c, z) ? 1.0 : 3.141592653589793, EXTRACT(reg_c, c) || EXTRACT(reg_c, z) ? 1.0 : 3.141592653589793);
  reg_d = CONSTRUCT(NAMED(s, NARROW(ARG_0 / 256) < 0), NAMED(z, BIT_TEST(6, NARROW(ARG_0 / 256))), NAMED(a, BIT_TEST(4, NARROW(ARG_0 / 256))), NAMED(p, BIT_TEST(2, NARROW(ARG_0 / 256))), NAMED(c, BIT_TEST(0, NARROW(ARG_0 / 256))));
  (void) printf("  FCMOV(unordered ? 1 : pi):       should=                             is=%12f/%15e\n", EXTRACT(reg_d, p) ? 1.0 : 3.141592653589793, EXTRACT(reg_d, p) ? 1.0 : 3.141592653589793);
  reg_e = CONSTRUCT(NAMED(s, NARROW(ARG_0 / 256) < 0), NAMED(z, BIT_TEST(6, NARROW(ARG_0 / 256))), NAMED(a, BIT_TEST(4, NARROW(ARG_0 / 256))), NAMED(p, BIT_TEST(2, NARROW(ARG_0 / 256))), NAMED(c, BIT_TEST(0, NARROW(ARG_0 / 256))));
  (void) printf("  FCMOV(!below ? 1 : pi):          should=                             is=%12f/%15e\n", EXTRACT(reg_e, c) ? 3.141592653589793 : 1.0, EXTRACT(reg_e, c) ? 3.141592653589793 : 1.0);
  reg_f = CONSTRUCT(NAMED(s, NARROW(ARG_0 / 256) < 0), NAMED(z, BIT_TEST(6, NARROW(ARG_0 / 256))), NAMED(a, BIT_TEST(4, NARROW(ARG_0 / 256))), NAMED(p, BIT_TEST(2, NARROW(ARG_0 / 256))), NAMED(c, BIT_TEST(0, NARROW(ARG_0 / 256))));
  (void) printf("  FCMOV(!equal ? 1 : pi):          should=                             is=%12f/%15e\n", EXTRACT(reg_f, z) ? 3.141592653589793 : 1.0, EXTRACT(reg_f, z) ? 3.141592653589793 : 1.0);
  reg_g = CONSTRUCT(NAMED(s, NARROW(ARG_0 / 256) < 0), NAMED(z, BIT_TEST(6, NARROW(ARG_0 / 256))), NAMED(a, BIT_TEST(4, NARROW(ARG_0 / 256))), NAMED(p, BIT_TEST(2, NARROW(ARG_0 / 256))), NAMED(c, BIT_TEST(0, NARROW(ARG_0 / 256))));
  (void) printf("  FCMOV(!below_or_equal ? 1 : pi): should=                             is=%12f/%15e\n", !EXTRACT(reg_g, z) && !EXTRACT(reg_g, c) ? 1.0 : 3.141592653589793, !EXTRACT(reg_g, z) && !EXTRACT(reg_g, c) ? 1.0 : 3.141592653589793);
  reg_h = CONSTRUCT(NAMED(s, NARROW(ARG_0 / 256) < 0), NAMED(z, BIT_TEST(6, NARROW(ARG_0 / 256))), NAMED(a, BIT_TEST(4, NARROW(ARG_0 / 256))), NAMED(p, BIT_TEST(2, NARROW(ARG_0 / 256))), NAMED(c, BIT_TEST(0, NARROW(ARG_0 / 256))));
  (void) printf("  FCMOV(!unordered ? 1 : pi):      should=                             is=%12f/%15e\n", EXTRACT(reg_h, p) ? 3.141592653589793 : 1.0, EXTRACT(reg_h, p) ? 3.141592653589793 : 1.0);
  return 0;
}

// address: 0804a2f0.0
// full-signature: func(FCOM, return=[<int(undef, 4),null,reg[eax]>], parameter=[<int(undef, 4),ARG_0,unknown>], varargs=false)
d4 FCOM(d4 ARG_0)
{
  (void) printf("FCOM(1,para): should=0x0000 is=0x%04x\n", UNSIGNED_EXTEND(COMBINE_BITS(0, 0, 0, 0, 0, 0, 0, 0, WIDEN(LOAD(&ARG_0)) > 1.0 || FLOAT_ISNAN(LOAD(&ARG_0)), 0, FLOAT_ISNAN(LOAD(&ARG_0)), 0, 0, 0, WIDEN(LOAD(&ARG_0)) == 1.0 || FLOAT_ISNAN(LOAD(&ARG_0)), 0)));
  (void) printf("FCOM(para,1): should=0x0100 is=0x%04x\n", UNSIGNED_EXTEND(COMBINE_BITS(0, 0, 0, 0, 0, 0, 0, 0, WIDEN(LOAD(&ARG_0)) < 1.0 || FLOAT_ISNAN(LOAD(&ARG_0)), 0, FLOAT_ISNAN(LOAD(&ARG_0)), 0, 0, 0, WIDEN(LOAD(&ARG_0)) == 1.0 || FLOAT_ISNAN(LOAD(&ARG_0)), 0)));
  (void) printf("FCOM(pi,1):   should=0x0000 is=0x%04x\n", 0);
  (void) printf("FCOM(1,pi):   should=0x0100 is=0x%04x\n", 256);
  (void) printf("FCOM(1,1):    should=0x4000 is=0x%04x\n", 0x4000);
  (void) printf("FCOM(1,nan):  should=0x4500 is=0x%04x\n", 17664);
  (void) printf("FICOM(pi,3):  should=0x0000 is=0x%04x\n", 0);
  (void) printf("FICOM(pi,4):  should=0x0100 is=0x%04x\n", 256);
  return 0;
}

// address: 0804a410.0
// full-signature: func(FCOMI, return=[<int(undef, 4),null,reg[eax]>], parameter=[<int(undef, 4),ARG_0,unknown>], varargs=false)
d4 FCOMI(d4 ARG_0)
{
  (void) printf("FCOMI(1,para): should=0x00 is=0x%02x\n", UNSIGNED_EXTEND(COMBINE_BITS(WIDEN(LOAD(&ARG_0)) > 1.0 || FLOAT_ISNAN(LOAD(&ARG_0)), 0, FLOAT_ISNAN(LOAD(&ARG_0)), 0, 0, 0, WIDEN(LOAD(&ARG_0)) == 1.0 || FLOAT_ISNAN(LOAD(&ARG_0)), 0)));
  (void) printf("FCOMI(para,1): should=0x01 is=0x%02x\n", UNSIGNED_EXTEND(COMBINE_BITS(WIDEN(LOAD(&ARG_0)) < 1.0 || FLOAT_ISNAN(LOAD(&ARG_0)), 0, FLOAT_ISNAN(LOAD(&ARG_0)), 0, 0, 0, WIDEN(LOAD(&ARG_0)) == 1.0 || FLOAT_ISNAN(LOAD(&ARG_0)), 0)));
  (void) printf("FCOMI(pi,1):   should=0x00 is=0x%02x\n", 0);
  (void) printf("FCOMI(1,pi):   should=0x01 is=0x%02x\n", 1);
  (void) printf("FCOMI(1,1):    should=0x40 is=0x%02x\n", 64);
  (void) printf("FCOMI(1,nan):  should=0x45 is=0x%02x\n", 69);
  return 0;
}

// address: 0804a4e0.0
// full-signature: func(FCOS, return=[<int(undef, 4),null,reg[eax]>], parameter=[<int(undef, 4),ARG_0,unknown>], varargs=false)
d4 FCOS(d4 ARG_0)
{
  (void) printf("FCOS(para):  should=                              is=%12f/%15e\n", NARROW(_holdec_floatCos(WIDEN(LOAD(&ARG_0)))), NARROW(_holdec_floatCos(WIDEN(LOAD(&ARG_0)))));
  (void) printf("FCOS(0):     should=     1.000000/   1.000000e+00 is=%12f/%15e\n", 1.0, 1.0);
  (void) printf("FCOS(pi/3):  should=     0.500000/   5.000000e-01 is=%12f/%15e\n", 0.5000000000000001, 0.5000000000000001);
  (void) printf("FCOS(pi):    should=    -1.000000/  -1.000000e+00 is=%12f/%15e\n", -1.0, -1.0);
  return 0;
}

// address: 0804a560.0
// full-signature: func(FDIV, return=[<int(undef, 4),null,reg[eax]>], parameter=[<int(undef, 4),ARG_0,unknown>], varargs=false)
d4 FDIV(d4 ARG_0)
{
  (void) printf("FDIV(1/para):     should=                             is=%12f/%15e\n", NARROW(1.0 / WIDEN(LOAD(&ARG_0))), NARROW(1.0 / WIDEN(LOAD(&ARG_0))));
  (void) printf("FDIV(para/12.34): should=                             is=%12f/%15e\n", LOAD(&ARG_0) / 12.34, LOAD(&ARG_0) / 12.34);
  (void) printf("FDIV(1/pi):       should=    0.318310/   3.183099e-01 is=%12f/%15e\n", 0.3183098861837907, 0.3183098861837907);
  (void) printf("FIDIV(pi/1000):   should=    0.003142/   3.141593e-03 is=%12f/%15e\n", 0.0031415926535897933, 0.0031415926535897933);
  return 0;
}

// address: 0804a5f0.0
// full-signature: func(FDIVR, return=[<int(undef, 4),null,reg[eax]>], parameter=[<int(undef, 4),ARG_0,unknown>], varargs=false)
d4 FDIVR(d4 ARG_0)
{
  (void) printf("FDIVR(1/para):     should=                             is=%12f/%15e\n", NARROW(1.0 / WIDEN(LOAD(&ARG_0))), NARROW(1.0 / WIDEN(LOAD(&ARG_0))));
  (void) printf("FDIVR(para/12.34): should=                             is=%12f/%15e\n", LOAD(&ARG_0) / 12.34, LOAD(&ARG_0) / 12.34);
  (void) printf("FDIVR(1/pi):       should=    0.318310/   3.183099e-01 is=%12f/%15e\n", 0.3183098861837907, 0.3183098861837907);
  (void) printf("FIDIVR(1000/pi):   should=  318.309886/   3.183099e+02 is=%12f/%15e\n", 318.3098861837907, 318.3098861837907);
  return 0;
}

// address: 0804a680.0
// full-signature: func(FILD, return=[<int(undef, 4),null,reg[eax]>], parameter=[], varargs=false)
d4 FILD(void)
{
  (void) printf("FILD(10k):  should=             10000.000000/   1.000000e+04 is=%25f/%15e\n", 10000.0, 10000.0);
  (void) printf("FILD(1G):   should=        1000000000.000000/   1.000000e+09 is=%25f/%15e\n", 1.0E9, 1.0E9);
  (void) printf("FILD(1P):   should=  1000000000000000.000000/   1.000000e+15 is=%25f/%15e\n", 1.0E15, 1.0E15);
  return 0;
}

// address: 0804a6e0.0
// full-signature: func(FIST, return=[<int(undef, 4),null,reg[eax]>], parameter=[], varargs=false)
d4 FIST(void)
{
  (void) puts("FIST:\n  RC=00: to nearest\n  RC=01: down to -inf\n  RC=10: up to +inf\n  RC=11: to zero\n");
  (void) printf("  FISTT(%f):        should=12 is=%d\n", 12.7, 12);
  (void) printf("  FIST(%f,RC=00):   should=13 is=%d\n", 12.7, 13);
  (void) printf("  FIST(%f,RC=01):   should=12 is=%d\n", 12.7, 12);
  (void) printf("  FIST(%f,RC=10):   should=13 is=%d\n", 12.7, 13);
  (void) printf("  FIST(%f,RC=11):   should=12 is=%d\n", 12.7, 12);
  (void) printf("  FISTT(%f):        should=-7 is=%d\n", -7.1, -7);
  (void) printf("  FIST(%f,RC=00):   should=-7 is=%d\n", -7.1, -7);
  (void) printf("  FIST(%f,RC=01):   should=-8 is=%d\n", -7.1, -8);
  (void) printf("  FIST(%f,RC=10):   should=-7 is=%d\n", -7.1, -7);
  (void) printf("  FIST(%f,RC=11):   should=-7 is=%d\n", -7.1, -7);
  return 0;
}

// address: 0804a980.0
// full-signature: func(FLD, return=[<int(undef, 4),null,reg[eax]>], parameter=[], varargs=false)
d4 FLD(void)
{
  (void) printf("FLD(float=12.34...):       should=   12.345679/   1.234568e+01 is=%12f/%15e\n", 12.34567928314209, 12.34567928314209);
  (void) printf("FLD(double=12.34...):      should=   12.345679/   1.234568e+01 is=%12f/%15e\n", 12.345678901234567, 12.345678901234567);
  (void) printf("FLD(long double=12.34...): should=   12.345679/   1.234568e+01 is=%12f/%15e\n", 12.345678901234567, 12.345678901234567);
  return 0;
}

// address: 0804a9e0.0
// full-signature: func(FLDC, return=[<int(undef, 4),null,reg[eax]>], parameter=[], varargs=false)
d4 FLDC(void)
{
  (void) printf("FLD1:   should=    1.000000/   1.000000e+00 is=%12f/%15e\n", 1.0, 1.0);
  (void) printf("FLDL2E: should=    1.442695/   1.442695e+00 is=%12f/%15e\n", 1.4426950408889634, 1.4426950408889634);
  (void) printf("FLDL2T: should=    3.321928/   3.321928e+00 is=%12f/%15e\n", 3.3219280948873626, 3.3219280948873626);
  (void) printf("FLDLG2: should=    0.301030/   3.010300e-01 is=%12f/%15e\n", 0.3010299956639812, 0.3010299956639812);
  (void) printf("FLDLN2: should=    0.693147/   6.931472e-01 is=%12f/%15e\n", 0.6931471805599453, 0.6931471805599453);
  (void) printf("FLDPI:  should=    3.141593/   3.141593e+00 is=%12f/%15e\n", 3.141592653589793, 3.141592653589793);
  (void) printf("FLDZ:   should=    0.000000/   0.000000e+00 is=%12f/%15e\n", 0.0, 0.0);
  return 0;
}

// address: 0804aaa0.0
// full-signature: func(FMUL, return=[<int(undef, 4),null,reg[eax]>], parameter=[<int(undef, 4),ARG_0,unknown>], varargs=false)
d4 FMUL(d4 ARG_0)
{
  (void) printf("FMUL(para*pi):  should=                             is=%12f/%15e\n", 3.141592653589793 * LOAD(&ARG_0), 3.141592653589793 * LOAD(&ARG_0));
  (void) printf("FMUL(12.34*pi): should=   38.767253/   3.876725e+01 is=%12f/%15e\n", 38.767253345298045, 38.767253345298045);
  (void) printf("FIMUL(1000*pi): should= 3141.592654/   3.141593e+03 is=%12f/%15e\n", 3141.592653589793, 3141.592653589793);
  return 0;
}

// address: 0804ab10.0
// full-signature: func(FPATAN, return=[<int(undef, 4),null,reg[eax]>], parameter=[<int(undef, 4),ARG_0,unknown>], varargs=false)
d4 FPATAN(d4 ARG_0)
{
  (void) printf("FPATAN(y=1 x=para): should=                             is=%12f/%15e\n", NARROW(_holdec_floatArcTan(WIDEN(LOAD(&ARG_0)), 1.0)), NARROW(_holdec_floatArcTan(WIDEN(LOAD(&ARG_0)), 1.0)));
  (void) printf("FPATAN(y=1 x=0):    should=    1.570796/   1.570796e+00 is=%12f/%15e\n", 1.5707963267948966, 1.5707963267948966);
  (void) printf("FPATAN(y=1 x=1):    should=    0.785398/   7.853982e-01 is=%12f/%15e\n", 0.7853981633974483, 0.7853981633974483);
  return 0;
}

// address: 0804ab70.0
// full-signature: func(FPREM, return=[<int(undef, 4),null,reg[eax]>], parameter=[<int(undef, 4),ARG_0,unknown>], varargs=false)
d4 FPREM(d4 ARG_0)
{
  (void) printf("FPREM(11 mod 7):          should=    4.000000/   4.000000e+00 is=%12f/%15e\n", 4.0, 4.0);
  (void) printf("FPREM1(11 mod 7):         should=   -3.000000/  -3.000000e+00 is=%12f/%15e\n", -3.0, -3.0);
  reg_var1 = WIDEN(LOAD(&ARG_0));
  do {
    reg_c = _holdec_floatFprem(reg_var1, 6.283185307179586);
    reg_var1 = EXTRACT(_holdec_floatFprem(reg_var1, 6.283185307179586), result);
  } while(EXTRACT(reg_c, incomplete));
  (void) printf("reduced para using FPREM: should=                             is=%12f/%15e\n", NARROW(reg_var1), NARROW(reg_var1));
  return 0;
}

// address: 0804abf0.0
// full-signature: func(FPTAN, return=[<int(undef, 4),null,reg[eax]>], parameter=[<int(undef, 4),ARG_0,unknown>], varargs=false)
d4 FPTAN(d4 ARG_0)
{
  (void) printf("FPTAN(para): should=                             is=%12f/%15e\n", NARROW(_holdec_floatTan(WIDEN(LOAD(&ARG_0)))), NARROW(_holdec_floatTan(WIDEN(LOAD(&ARG_0)))));
  (void) printf("FPTAN(0):    should=    0.000000/   0.000000e+00 is=%12f/%15e\n", 0.0, 0.0);
  (void) printf("FPTAN(0)[1]: should=    1.000000/   1.000000e+00 is=%12f/%15e\n", 1.0, 1.0);
  (void) printf("FPTAN(pi/4): should=    1.000000/   1.000000e+00 is=%12f/%15e\n", 0.9999999999999999, 0.9999999999999999);
  return 0;
}

// address: 0804ac80.0
// full-signature: func(FRNDINT, return=[<int(undef, 4),null,reg[eax]>], parameter=[], varargs=false)
d4 FRNDINT(void)
{
  (void) puts("FRNDINT:\n  RC=00: to nearest\n  RC=01: down to -inf\n  RC=10: up to +inf\n  RC=11: to zero\n");
  (void) printf("  FRNDINT(para):              should=                             is=%12f/%15e\n", NARROW(_holdec_floatRoundExtended(WIDEN(LOAD(&ARG_0)), InitValue(initial_value_of_fpu_cw) / 1024 & 0x3)), NARROW(_holdec_floatRoundExtended(WIDEN(LOAD(&ARG_0)), InitValue(initial_value_of_fpu_cw) / 1024 & 0x3)));
  (void) printf("  FRNDINT(%f,RC=00):   should=   13.000000/   1.300000e+01 is=%12f/%15e\n", 12.7, 13.0, 13.0);
  (void) printf("  FRNDINT(%f,RC=01):   should=   12.000000/   1.200000e+01 is=%12f/%15e\n", 12.7, 12.0, 12.0);
  (void) printf("  FRNDINT(%f,RC=10):   should=   13.000000/   1.300000e+01 is=%12f/%15e\n", 12.7, 13.0, 13.0);
  (void) printf("  FRNDINT(%f,RC=11):   should=   12.000000/   1.200000e+01 is=%12f/%15e\n", 12.7, 12.0, 12.0);
  (void) printf("  FRNDINT(%f,RC=00):   should=   -7.000000/  -7.000000e+00 is=%12f/%15e\n", -7.1, -7.0, -7.0);
  (void) printf("  FRNDINT(%f,RC=01):   should=   -8.000000/  -8.000000e+00 is=%12f/%15e\n", -7.1, -8.0, -8.0);
  (void) printf("  FRNDINT(%f,RC=10):   should=   -7.000000/  -7.000000e+00 is=%12f/%15e\n", -7.1, -7.0, -7.0);
  (void) printf("  FRNDINT(%f,RC=11):   should=   -7.000000/  -7.000000e+00 is=%12f/%15e\n", -7.1, -7.0, -7.0);
  return 0;
}

// address: 0804aed0.0
// full-signature: func(FSCALE, return=[<int(undef, 4),null,reg[eax]>], parameter=[<int(undef, 4),ARG_0,unknown>], varargs=false)
d4 FSCALE(d4 ARG_0)
{
  (void) printf("FSCALE(para*2^4):   should=                             is=%12f/%15e\n", 16.0 * LOAD(&ARG_0), 16.0 * LOAD(&ARG_0));
  (void) printf("FSCALE(pi*2^para):  should=                             is=%12f/%15e\n", 3.141592653589793 * NARROW(_holdec_floatPower(2.0, FLOAT_ROUND(WIDEN(LOAD(&ARG_0)), TRUNCATE_TO_ZERO))), 3.141592653589793 * NARROW(_holdec_floatPower(2.0, FLOAT_ROUND(WIDEN(LOAD(&ARG_0)), TRUNCATE_TO_ZERO))));
  (void) printf("FSCALE(pi*2^4):     should=   50.265482/   5.026548e+01 is=%12f/%15e\n", 50.26548245743669, 50.26548245743669);
  (void) printf("FSCALE(pi*2^-4):    should=    0.196350/   1.963495e-01 is=%12f/%15e\n", 0.19634954084936207, 0.19634954084936207);
  (void) printf("FSCALE(pi*2^12.34): should=12867.963509/   1.286796e+04 is=%12f/%15e\n", 12867.963509103793, 12867.963509103793);
  return 0;
}

// address: 0804af90.0
// full-signature: func(FSIN, return=[<int(undef, 4),null,reg[eax]>], parameter=[<int(undef, 4),ARG_0,unknown>], varargs=false)
d4 FSIN(d4 ARG_0)
{
  (void) printf("FSIN(para):  should=                              is=%12f/%15e\n", NARROW(_holdec_floatSin(WIDEN(LOAD(&ARG_0)))), NARROW(_holdec_floatSin(WIDEN(LOAD(&ARG_0)))));
  (void) printf("FSIN(0):     should=     0.000000/   0.000000e+00 is=%12f/%15e\n", 0.0, 0.0);
  (void) printf("FSIN(pi/6):  should=     0.500000/   5.000000e-01 is=%12f/%15e\n", 0.49999999999999994, 0.49999999999999994);
  (void) printf("FSIN(pi/2):  should=     1.000000/   1.000000e+00 is=%12f/%15e\n", 1.0, 1.0);
  return 0;
}

// address: 0804b020.0
// full-signature: func(FSINCOS, return=[<int(undef, 4),null,reg[eax]>], parameter=[<int(undef, 4),ARG_0,unknown>], varargs=false)
d4 FSINCOS(d4 ARG_0)
{
  (void) printf("FSINCOS(para)[0=cos]:  should=                              is=%12f/%15e\n", NARROW(_holdec_floatCos(WIDEN(LOAD(&ARG_0)))), NARROW(_holdec_floatCos(WIDEN(LOAD(&ARG_0)))));
  (void) printf("FSINCOS(para)[1=sin]:  should=                              is=%12f/%15e\n", NARROW(_holdec_floatSin(WIDEN(LOAD(&ARG_0)))), NARROW(_holdec_floatSin(WIDEN(LOAD(&ARG_0)))));
  (void) printf("FSINCOS(0)[0=cos]:     should=     1.000000/   1.000000e+00 is=%12f/%15e\n", 1.0, 1.0);
  (void) printf("FSINCOS(0)[1=sin]:     should=     0.000000/   0.000000e+00 is=%12f/%15e\n", 0.0, 0.0);
  return 0;
}

// address: 0804b0a0.0
// full-signature: func(FSQRT, return=[<int(undef, 4),null,reg[eax]>], parameter=[<int(undef, 4),ARG_0,unknown>], varargs=false)
d4 FSQRT(d4 ARG_0)
{
  (void) printf("FSQRT(para):     should=                             is=%12f/%15e\n", NARROW(_holdec_floatSqrt(WIDEN(LOAD(&ARG_0)))), NARROW(_holdec_floatSqrt(WIDEN(LOAD(&ARG_0)))));
  (void) printf("FSQRT(pi):       should=    1.772454/   1.772454e+00 is=%12f/%15e\n", 1.7724538509055159, 1.7724538509055159);
  (void) printf("FSQRT(152.2756): should=   12.340000/   1.234000e+01 is=%12f/%15e\n", 12.34, 12.34);
  return 0;
}

// address: 0804b100.0
// full-signature: func(FST, return=[<int(undef, 4),null,reg[eax]>], parameter=[], varargs=false)
d4 FST(void)
{
  (void) STORE(&buffer, 3.141592653589793);
  (void) printf("FST(pi as float)       should=0xdb 0x0f 0x49 0x40                               is=0x%02x 0x%02x 0x%02x 0x%02x\n", UNSIGNED_EXTEND(buffer), UNSIGNED_EXTEND(g_0x08050029), UNSIGNED_EXTEND(g_0x0805002a), UNSIGNED_EXTEND(g_0x0805002b));
  (void) STORE(&buffer, 3.141592653589793);
  (void) printf("FST(pi as double)      should=0x18 0x2d 0x44 0x54 0xfb 0x21 0x09 0x40           is=0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x\n", UNSIGNED_EXTEND(buffer), UNSIGNED_EXTEND(g_0x08050029), UNSIGNED_EXTEND(g_0x0805002a), UNSIGNED_EXTEND(g_0x0805002b), UNSIGNED_EXTEND(g_0x0805002c), UNSIGNED_EXTEND(g_0x0805002d), UNSIGNED_EXTEND(g_0x0805002e), UNSIGNED_EXTEND(g_0x0805002f));
  (void) STORE(&buffer, 3.141592653589793);
  (void) printf("FST(pi as long double) should=0x35 0xc2 0x68 0x21 0xa2 0xda 0x0f 0xc9 0x00 0x40 is=0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x\n", UNSIGNED_EXTEND(buffer), UNSIGNED_EXTEND(g_0x08050029), UNSIGNED_EXTEND(g_0x0805002a), UNSIGNED_EXTEND(g_0x0805002b), UNSIGNED_EXTEND(g_0x0805002c), UNSIGNED_EXTEND(g_0x0805002d), UNSIGNED_EXTEND(g_0x0805002e), UNSIGNED_EXTEND(g_0x0805002f), UNSIGNED_EXTEND(g_0x08050030), UNSIGNED_EXTEND(g_0x08050031));
  return 0;
}

// address: 0804b200.0
// full-signature: func(FSUB, return=[<int(undef, 4),null,reg[eax]>], parameter=[<int(undef, 4),ARG_0,unknown>], varargs=false)
d4 FSUB(d4 ARG_0)
{
  (void) printf("FSUB(1-para):     should=                             is=%12f/%15e\n", NARROW(1.0 - WIDEN(LOAD(&ARG_0))), NARROW(1.0 - WIDEN(LOAD(&ARG_0))));
  (void) printf("FSUB(para-12.34): should=                             is=%12f/%15e\n", LOAD(&ARG_0) - 12.34, LOAD(&ARG_0) - 12.34);
  (void) printf("FSUB(1-pi):       should=   -2.141593/  -2.141593e+00 is=%12f/%15e\n", -2.141592653589793, -2.141592653589793);
  (void) printf("FISUB(pi-1000):   should= -996.858407/  -9.968584e+02 is=%12f/%15e\n", -996.8584073464102, -996.8584073464102);
  return 0;
}

// address: 0804b290.0
// full-signature: func(FTST, return=[<int(undef, 4),null,reg[eax]>], parameter=[<int(undef, 4),ARG_0,unknown>], varargs=false)
d4 FTST(d4 ARG_0)
{
  (void) printf("FTST(para): should=0x0100 is=0x%04x\n", UNSIGNED_EXTEND(COMBINE_BITS(0, 0, 0, 0, 0, 0, 0, 0, WIDEN(LOAD(&ARG_0)) < 0.0 || FLOAT_ISNAN(LOAD(&ARG_0)), 0, FLOAT_ISNAN(LOAD(&ARG_0)), 0, 0, 0, WIDEN(LOAD(&ARG_0)) == 0.0 || FLOAT_ISNAN(LOAD(&ARG_0)), 0)));
  (void) printf("FTST(pi):   should=0x0000 is=0x%04x\n", 0);
  (void) printf("FTST(-pi):  should=0x0100 is=0x%04x\n", 256);
  (void) printf("FTST(0.0):  should=0x4000 is=0x%04x\n", 0x4000);
  (void) printf("FTST(nan):  should=0x4500 is=0x%04x\n", 17664);
  return 0;
}

// address: 0804b340.0
// full-signature: func(FXAM, return=[<int(undef, 4),null,reg[eax]>], parameter=[<int(undef, 4),ARG_0,unknown>], varargs=false)
d4 FXAM(d4 ARG_0)
{
  (void) printf("FXAM(para):  should=0x0400 is=0x%04x\n", UNSIGNED_EXTEND(COMBINE_BITS(0, 0, 0, 0, 0, 0, 0, 0, EXTRACT(_holdec_floatExamine(WIDEN(LOAD(&ARG_0))), c0), 0, EXTRACT(_holdec_floatExamine(WIDEN(LOAD(&ARG_0))), c2), 0, 0, 0, EXTRACT(_holdec_floatExamine(WIDEN(LOAD(&ARG_0))), c3), 0)));
  (void) printf("FXAM(pi):    should=0x0400 is=0x%04x\n", 0x400);
  (void) printf("FXAM(0.0):   should=0x4000 is=0x%04x\n", 0x4000);
  (void) printf("FXAM(nan):   should=0x0100 is=0x%04x\n", 256);
  (void) printf("FXAM(inf):   should=0x0500 is=0x%04x\n", 1280);
  (void) printf("FXAM(empty): should=0x4100 is=0x%04x\n", 16640);
  return 0;
}

// address: 0804b410.0
// full-signature: func(FXCH, return=[<int(undef, 4),null,reg[eax]>], parameter=[<int(undef, 4),ARG_0,unknown>], varargs=false)
d4 FXCH(d4 ARG_0)
{
  (void) printf("FXCH(para):  should=                             is=%12f/%15e\n", LOAD(&ARG_0), LOAD(&ARG_0));
  (void) printf("FXCH(pi):    should=    3.141593/   3.141593e+00 is=%12f/%15e\n", 3.141592653589793, 3.141592653589793);
  return 0;
}

// address: 0804b460.0
// full-signature: func(FXTRACT, return=[<int(undef, 4),null,reg[eax]>], parameter=[<int(undef, 4),ARG_0,unknown>], varargs=false)
d4 FXTRACT(d4 ARG_0)
{
  (void) printf("FXTRACT(para)[0=signi]:  should=                             is=%12f/%15e\n", NARROW(_holdec_floatSignificand(WIDEN(LOAD(&ARG_0)))), NARROW(_holdec_floatSignificand(WIDEN(LOAD(&ARG_0)))));
  (void) printf("FXTRACT(para)[1=exp]:    should=                             is=%12f/%15e\n", NARROW(_holdec_floatExponent(WIDEN(LOAD(&ARG_0)))), NARROW(_holdec_floatExponent(WIDEN(LOAD(&ARG_0)))));
  (void) printf("FXTRACT(12.34)[0=signi]: should=    1.542500/   1.542500e+00 is=%12f/%15e\n", 1.5425, 1.5425);
  (void) printf("FXTRACT(12.34)[1=exp]:   should=    3.000000/   3.000000e+00 is=%12f/%15e\n", 3.0, 3.0);
  return 0;
}

// address: 0804b4f0.0
// full-signature: func(FYL2X, return=[<int(undef, 4),null,reg[eax]>], parameter=[<int(undef, 4),ARG_0,unknown>], varargs=false)
d4 FYL2X(d4 ARG_0)
{
  (void) printf("FYL2X(para, base=2):  should=                             is=%12f/%15e\n", 1.0 * NARROW(_holdec_floatLog2(WIDEN(LOAD(&ARG_0)))), 1.0 * NARROW(_holdec_floatLog2(WIDEN(LOAD(&ARG_0)))));
  (void) printf("FYL2X(1000, base=2):  should=    9.965784/   9.965784e+00 is=%12f/%15e\n", 9.965784284662087, 9.965784284662087);
  (void) printf("FYL2X(1000, base=e):  should=    6.907755/   6.907755e+00 is=%12f/%15e\n", 6.907755278982137, 6.907755278982137);
  (void) printf("FYL2X(1000, base=10): should=    3.000000/   3.000000e+00 is=%12f/%15e\n", 3.0, 3.0);
  return 0;
}

// address: 0804b580.0
// full-signature: func(FYL2XP1, return=[<int(undef, 4),null,reg[eax]>], parameter=[<int(undef, 4),ARG_0,unknown>], varargs=false)
d4 FYL2XP1(d4 ARG_0)
{
  (void) printf("FYL2XP1(para, base=2): should=                             is=%12f/%15e\n", 1.0 * NARROW(_holdec_floatLog2(1.0 + WIDEN(LOAD(&ARG_0)))), 1.0 * NARROW(_holdec_floatLog2(1.0 + WIDEN(LOAD(&ARG_0)))));
  (void) printf("FYL2XP1(999, base=2):  should=    9.965784/   9.965784e+00 is=%12f/%15e\n", 9.965784284662087, 9.965784284662087);
  (void) printf("FYL2XP1(999, base=e):  should=    6.907755/   6.907755e+00 is=%12f/%15e\n", 6.907755278982137, 6.907755278982137);
  (void) printf("FYL2XP1(999, base=10): should=    3.000000/   3.000000e+00 is=%12f/%15e\n", 3.0, 3.0);
  return 0;
}

// address: 0804b610.0
// full-signature: func(NOT_EXECUTED, return=[<int(undef, 4),null,reg[eax]>], parameter=[], varargs=false)
d4 NOT_EXECUTED(void)
{
  (void) puts("before FNOP");
  (void) puts("before FNCLEX");
  asm("fclex");
  (void) puts("before FDECSTP");
  asm("fdecstp");
  (void) puts("before FFREE(st(4))");
  asm("ffree st4");
  (void) puts("before FINCSTP");
  asm("fincstp");
  (void) puts("before FNINIT");
  (void) puts("before FNSAVE");
  asm("l.fnsave ds:[0x8050028]");
  (void) puts("before FNSTCW");
  (void) STORE(&buffer, 895);
  (void) puts("before FNSTENV");
  asm("l.fnstenv ds:[0x8050028]");
  (void) puts("before FNSTSW");
  (void) STORE(&buffer, COMBINE_BITS(UNDEF, UNDEF, UNDEF, UNDEF, UNDEF, UNDEF, UNDEF, UNDEF, UNDEF, UNDEF, UNDEF, UNDEF, UNDEF, UNDEF, UNDEF, UNDEF));
  (void) puts("before FRSTOR");
  asm("l.frstor ds:[0x8050028]");
  (void) puts("before FWAIT");
  (void) puts("before FXRSTOR");
  asm("l.fxrstor ds:[0x8050028]");
  (void) puts("before FXSAVE");
  asm("l.fxsave ds:[0x8050028]");
  return 0;
}

// address: 0804b710.0
// full-signature: func(TOP, return=[<int(undef, 4),null,reg[eax]>], parameter=[], varargs=false)
d4 TOP(void)
{
  return UNSIGNED_EXTEND(COMBINE_BITS(UNDEF, UNDEF, UNDEF, UNDEF, UNDEF, UNDEF, UNDEF, UNDEF, InitValue(initial_value_of_fpu_sw_c0), UNDEF, InitValue(initial_value_of_fpu_sw_c2), UNDEF, UNDEF, UNDEF, InitValue(initial_value_of_fpu_sw_c3), UNDEF)) / 2048 & 0x7;
}


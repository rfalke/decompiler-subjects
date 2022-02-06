
int F2XM1() {
    __int128 v0;
    v1[v2] = fchs(1.0);
    v1[v2] = f2xm1(v0);
    →printf("F2XM1(-1):   should=   -0.500000/  -5.000000e-01 is=%12f/%15e\n");
    v1[v2] = f2xm1(0.0);
    →printf("F2XM1(0):    should=    0.000000/   0.000000e+00 is=%12f/%15e\n");
    v1[v2] = f2xm1(1.0);
    →printf("F2XM1(+1):   should=    1.000000/   1.000000e+00 is=%12f/%15e\n");
    v1[v2] = f2xm1(0.3183098861837907);
    →printf("F2XM1(1/pi): should=    0.246869/   2.468690e-01 is=%12f/%15e\n");
    return 0;
}

int FABS(double param0, int param1) {
    __int128 v0;
    __int128 v1;
    v2[v3] = fabs(param0);
    →printf("FABS(para):   should=                            is=%12f/%15e\n");
    v2[v3] = fchs(1.0);
    v2[v3] = fabs(v1);
    →printf("FABS(-1):   should=     1.000000/   1.000000e+00 is=%12f/%15e\n");
    v2[v3] = fchs(0.0);
    v2[v3] = fabs(v0);
    →printf("FABS(-0):    should=    0.000000/   0.000000e+00 is=%12f/%15e\n");
    v2[v3] = fabs(1.0);
    →printf("FABS(+1):   should=     1.000000/   1.000000e+00 is=%12f/%15e\n");
    return 0;
}

int FBLD() {
    v0[v1] = fbld(*(__int128*)&readbuffer);
    →printf("FBLD(0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x): should=-123456789088776656.000000/  -1.234568e+17 is=%12f/%15e\n");
    return 0;
}

int FBSTP() {
    __int128 v0;
    v1[v2] = fchs(1.23456789011223344E17);
    *(__int128*)&buffer = fbstp(v0);
    v1[v2] = fchs(1.23456789011223344E17);
    →printf("FBSTP(%f) should=0x44 0x33 0x22 0x11 0x90 0x78 0x56 0x34 0x12 0x80 is=0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x\n");
    return 0;
}

int FCHS(double param0, int param1) {
    v0[v1] = fchs(param0);
    →printf("FCHS(para):  should=                             is=%12f/%15e\n");
    v0[v1] = fchs(3.141592653589793);
    →printf("FCHS(pi):    should=   -3.141593/  -3.141593e+00 is=%12f/%15e\n");
    v0[v1] = fchs(-3.141592653589793);
    →printf("FCHS(0-pi):  should=    3.141593/   3.141593e+00 is=%12f/%15e\n");
    return 0;
}

int FCMOV(int param0) {
    →printf("using EFLAGS=0x%0x\n");
    v0[v1] = fcmovb(1.0);
    →printf("  FCMOV(below ? 1 : pi):           should=                             is=%12f/%15e\n");
    v0[v1] = fcmove(1.0);
    →printf("  FCMOV(equal ? 1 : pi):           should=                             is=%12f/%15e\n");
    v0[v1] = fcmovbe(1.0);
    →printf("  FCMOV(below_or_equal ? 1 : pi):  should=                             is=%12f/%15e\n");
    v0[v1] = fcmovu(1.0);
    →printf("  FCMOV(unordered ? 1 : pi):       should=                             is=%12f/%15e\n");
    v0[v1] = fcmovnb(1.0);
    →printf("  FCMOV(!below ? 1 : pi):          should=                             is=%12f/%15e\n");
    v0[v1] = fcmovne(1.0);
    →printf("  FCMOV(!equal ? 1 : pi):          should=                             is=%12f/%15e\n");
    v0[v1] = fcmovnbe(1.0);
    →printf("  FCMOV(!below_or_equal ? 1 : pi): should=                             is=%12f/%15e\n");
    v0[v1] = fcmovnu(1.0);
    →printf("  FCMOV(!unordered ? 1 : pi):      should=                             is=%12f/%15e\n");
    return 0;
}

int FCOM(int param0, int param1) {
    short v0;
    short v1;
    short v2;
    short v3;
    short v4;
    short v5;
    short v6;
    short v7;
    fcomp(1.0, param0);
    fnstsw(v7);
    →printf("FCOM(1,para): should=0x0000 is=0x%04x\n");
    fcompp(*(double*)&param0, 1.0);
    fnstsw(v0);
    →printf("FCOM(para,1): should=0x0100 is=0x%04x\n");
    fcompp(3.141592653589793, 1.0);
    fnstsw(v1);
    →printf("FCOM(pi,1):   should=0x0000 is=0x%04x\n");
    fcompp(1.0, 3.141592653589793);
    fnstsw(v2);
    →printf("FCOM(1,pi):   should=0x0100 is=0x%04x\n");
    fcompp(1.0, 1.0);
    fnstsw(v3);
    →printf("FCOM(1,1):    should=0x4000 is=0x%04x\n");
    fcompp(1.0, NaN);
    fnstsw(v4);
    →printf("FCOM(1,nan):  should=0x4500 is=0x%04x\n");
    ficomp(3.141592653589793, 3);
    fnstsw(v5);
    →printf("FICOM(pi,3):  should=0x0000 is=0x%04x\n");
    ficomp(3.141592653589793, 4);
    fnstsw(v6);
    →printf("FICOM(pi,4):  should=0x0100 is=0x%04x\n");
    return 0;
}

int FCOMI(double param0, int param1) {
    fcomip(1.0, param0);
    →printf("FCOMI(1,para): should=0x00 is=0x%02x\n");
    fcomip(param0, 1.0);
    →printf("FCOMI(para,1): should=0x01 is=0x%02x\n");
    fcomip(3.141592653589793, 1.0);
    →printf("FCOMI(pi,1):   should=0x00 is=0x%02x\n");
    fcomip(1.0, 3.141592653589793);
    →printf("FCOMI(1,pi):   should=0x01 is=0x%02x\n");
    fcomip(1.0, 1.0);
    →printf("FCOMI(1,1):    should=0x40 is=0x%02x\n");
    fcomip(1.0, NaN);
    →printf("FCOMI(1,nan):  should=0x45 is=0x%02x\n");
    return 0;
}

int FCOS(double param0, int param1) {
    v0[v1] = fcos(param0);
    →printf("FCOS(para):  should=                              is=%12f/%15e\n");
    v0[v1] = fcos(0.0);
    →printf("FCOS(0):     should=     1.000000/   1.000000e+00 is=%12f/%15e\n");
    v0[v1] = fcos(1.0471975511965976);
    →printf("FCOS(pi/3):  should=     0.500000/   5.000000e-01 is=%12f/%15e\n");
    v0[v1] = fcos(3.141592653589793);
    →printf("FCOS(pi):    should=    -1.000000/  -1.000000e+00 is=%12f/%15e\n");
    return 0;
}

int FDIV(double param0, int param1) {
    →printf("FDIV(1/para):     should=                             is=%12f/%15e\n");
    →printf("FDIV(para/12.34): should=                             is=%12f/%15e\n");
    →printf("FDIV(1/pi):       should=    0.318310/   3.183099e-01 is=%12f/%15e\n");
    →printf("FIDIV(pi/1000):   should=    0.003142/   3.141593e-03 is=%12f/%15e\n");
    return 0;
}

int FDIVR(double param0, int param1) {
    →printf("FDIVR(1/para):     should=                             is=%12f/%15e\n");
    →printf("FDIVR(para/12.34): should=                             is=%12f/%15e\n");
    →printf("FDIVR(1/pi):       should=    0.318310/   3.183099e-01 is=%12f/%15e\n");
    →printf("FIDIVR(1000/pi):   should=  318.309886/   3.183099e+02 is=%12f/%15e\n");
    return 0;
}

int FILD() {
    →printf("FILD(10k):  should=             10000.000000/   1.000000e+04 is=%25f/%15e\n");
    →printf("FILD(1G):   should=        1000000000.000000/   1.000000e+09 is=%25f/%15e\n");
    →printf("FILD(1P):   should=  1000000000000000.000000/   1.000000e+15 is=%25f/%15e\n");
    return 0;
}

int FIST() {
    char v0;
    short v1;
    *(int*)&v0 = &loc_804A6EA;
    /*BAD_CALL!*/ →puts("FIST:\n  RC=00: to nearest\n  RC=01: down to -inf\n  RC=10: up to +inf\n  RC=11: to zero\n");
    int v2 = fisttp(12.7);
    →printf("  FISTT(%f):        should=12 is=%d\n");
    short v1 = fnstcw();
    fldcw(127);
    fldcw(v1);
    →printf("  FIST(%f,RC=00):   should=13 is=%d\n");
    v1 = fnstcw();
    fldcw(1151);
    fldcw(v1);
    →printf("  FIST(%f,RC=01):   should=12 is=%d\n");
    v1 = fnstcw();
    fldcw(2175);
    fldcw(v1);
    →printf("  FIST(%f,RC=10):   should=13 is=%d\n");
    v1 = fnstcw();
    fldcw(3199);
    fldcw(v1);
    →printf("  FIST(%f,RC=11):   should=12 is=%d\n");
    v2 = fisttp(-7.1);
    →printf("  FISTT(%f):        should=-7 is=%d\n");
    v1 = fnstcw();
    fldcw(127);
    fldcw(v1);
    →printf("  FIST(%f,RC=00):   should=-7 is=%d\n");
    v1 = fnstcw();
    fldcw(1151);
    fldcw(v1);
    →printf("  FIST(%f,RC=01):   should=-8 is=%d\n");
    v1 = fnstcw();
    fldcw(2175);
    fldcw(v1);
    →printf("  FIST(%f,RC=10):   should=-7 is=%d\n");
    v1 = fnstcw();
    fldcw(3199);
    fldcw(v1);
    →printf("  FIST(%f,RC=11):   should=-7 is=%d\n");
    return 0;
}

int FLD() {
    →printf("FLD(float=12.34...):       should=   12.345679/   1.234568e+01 is=%12f/%15e\n");
    →printf("FLD(double=12.34...):      should=   12.345679/   1.234568e+01 is=%12f/%15e\n");
    →printf("FLD(long double=12.34...): should=   12.345679/   1.234568e+01 is=%12f/%15e\n");
    return 0;
}

int FLDC() {
    →printf("FLD1:   should=    1.000000/   1.000000e+00 is=%12f/%15e\n");
    →printf("FLDL2E: should=    1.442695/   1.442695e+00 is=%12f/%15e\n");
    →printf("FLDL2T: should=    3.321928/   3.321928e+00 is=%12f/%15e\n");
    →printf("FLDLG2: should=    0.301030/   3.010300e-01 is=%12f/%15e\n");
    →printf("FLDLN2: should=    0.693147/   6.931472e-01 is=%12f/%15e\n");
    →printf("FLDPI:  should=    3.141593/   3.141593e+00 is=%12f/%15e\n");
    →printf("FLDZ:   should=    0.000000/   0.000000e+00 is=%12f/%15e\n");
    return 0;
}

int FMUL(double param0, int param1) {
    →printf("FMUL(para*pi):  should=                             is=%12f/%15e\n");
    →printf("FMUL(12.34*pi): should=   38.767253/   3.876725e+01 is=%12f/%15e\n");
    →printf("FIMUL(1000*pi): should= 3141.592654/   3.141593e+03 is=%12f/%15e\n");
    return 0;
}

int FPATAN(double param0, int param1) {
    v0[v1 + 1] = fpatan(1.0, param0);
    →printf("FPATAN(y=1 x=para): should=                             is=%12f/%15e\n");
    v0[v1 + 1] = fpatan(1.0, 0.0);
    →printf("FPATAN(y=1 x=0):    should=    1.570796/   1.570796e+00 is=%12f/%15e\n");
    v0[v1 + 1] = fpatan(1.0, 1.0);
    →printf("FPATAN(y=1 x=1):    should=    0.785398/   7.853982e-01 is=%12f/%15e\n");
    return 0;
}

int FPREM(double param0, int param1) {
    short v0;
    int v1;
    v2[v3] = fprem((double)11, (double)7);
    →printf("FPREM(11 mod 7):          should=    4.000000/   4.000000e+00 is=%12f/%15e\n");
    v2[v3] = fprem1((double)11, (double)7);
    →printf("FPREM1(11 mod 7):         should=   -3.000000/  -3.000000e+00 is=%12f/%15e\n");
    do {
        v2[v3] = fprem(6.283185307179586, param0);
        fnstsw(v0);
    }
    while((v1 >>> 10) & 0x1);
    →printf("reduced para using FPREM: should=                             is=%12f/%15e\n");
    return 0;
}

int FPTAN(double param0, int param1) {
    v0[v1] = fptan(param0);
    →printf("FPTAN(para): should=                             is=%12f/%15e\n");
    v0[v1] = fptan(0.0);
    →printf("FPTAN(0):    should=    0.000000/   0.000000e+00 is=%12f/%15e\n");
    v0[v1] = fptan(0.0);
    →printf("FPTAN(0)[1]: should=    1.000000/   1.000000e+00 is=%12f/%15e\n");
    v0[v1] = fptan(0.7853981633974483);
    →printf("FPTAN(pi/4): should=    1.000000/   1.000000e+00 is=%12f/%15e\n");
    return 0;
}

short FRNDINT(double param0, int param1) {
    short v0;
    char v1;
    int v2;
    char v3;
    __SyntheticTypeUnknownF v4;
    *(int*)&v0 = &loc_804AC8A;
    /*BAD_CALL!*/ →puts("FRNDINT:\n  RC=00: to nearest\n  RC=01: down to -inf\n  RC=10: up to +inf\n  RC=11: to zero\n");
    v5[v6] = frndint(param0);
    *(long long*)&v1 = v4;
    *(long long*)&v2 = v4;
    →printf("  FRNDINT(para):              should=                             is=%12f/%15e\n");
    *(long long*)&v3 = 12.7;
    v0 = fnstcw();
    fldcw(127);
    v5[v6] = frndint(12.7);
    fldcw(v0);
    →printf("  FRNDINT(%f,RC=00):   should=   13.000000/   1.300000e+01 is=%12f/%15e\n");
    *(long long*)&v3 = 12.7;
    v0 = fnstcw();
    fldcw(1151);
    v5[v6] = frndint(12.7);
    fldcw(v0);
    →printf("  FRNDINT(%f,RC=01):   should=   12.000000/   1.200000e+01 is=%12f/%15e\n");
    *(long long*)&v3 = 12.7;
    v0 = fnstcw();
    fldcw(2175);
    v5[v6] = frndint(12.7);
    fldcw(v0);
    →printf("  FRNDINT(%f,RC=10):   should=   13.000000/   1.300000e+01 is=%12f/%15e\n");
    *(long long*)&v3 = 12.7;
    v0 = fnstcw();
    fldcw(3199);
    v5[v6] = frndint(12.7);
    fldcw(v0);
    →printf("  FRNDINT(%f,RC=11):   should=   12.000000/   1.200000e+01 is=%12f/%15e\n");
    *(long long*)&v3 = -7.1;
    v0 = fnstcw();
    fldcw(127);
    v5[v6] = frndint(-7.1);
    fldcw(v0);
    →printf("  FRNDINT(%f,RC=00):   should=   -7.000000/  -7.000000e+00 is=%12f/%15e\n");
    *(long long*)&v3 = -7.1;
    v0 = fnstcw();
    fldcw(1151);
    v5[v6] = frndint(-7.1);
    fldcw(v0);
    →printf("  FRNDINT(%f,RC=01):   should=   -8.000000/  -8.000000e+00 is=%12f/%15e\n");
    *(long long*)&v3 = -7.1;
    v0 = fnstcw();
    fldcw(2175);
    v5[v6] = frndint(-7.1);
    fldcw(v0);
    →printf("  FRNDINT(%f,RC=10):   should=   -7.000000/  -7.000000e+00 is=%12f/%15e\n");
    *(long long*)&v3 = -7.1;
    v0 = fnstcw();
    fldcw(3199);
    v5[v6] = frndint(-7.1);
    fldcw(v0);
    →printf("  FRNDINT(%f,RC=11):   should=   -7.000000/  -7.000000e+00 is=%12f/%15e\n");
    return 0;
}

int FSCALE(double param0, int param1) {
    __int128 v0;
    v1[v2] = fscale(param0, (double)4);
    →printf("FSCALE(para*2^4):   should=                             is=%12f/%15e\n");
    v1[v2] = fscale(3.141592653589793, param0);
    →printf("FSCALE(pi*2^para):  should=                             is=%12f/%15e\n");
    v1[v2] = fscale(3.141592653589793, (double)4);
    →printf("FSCALE(pi*2^4):     should=   50.265482/   5.026548e+01 is=%12f/%15e\n");
    v1[v2] = fchs((double)4);
    v1[v2] = fscale(3.141592653589793, v0);
    →printf("FSCALE(pi*2^-4):    should=    0.196350/   1.963495e-01 is=%12f/%15e\n");
    v1[v2] = fscale(3.141592653589793, 12.34);
    →printf("FSCALE(pi*2^12.34): should=12867.963509/   1.286796e+04 is=%12f/%15e\n");
    return 0;
}

int FSIN(double param0, int param1) {
    v0[v1] = fsin(param0);
    →printf("FSIN(para):  should=                              is=%12f/%15e\n");
    v0[v1] = fsin(0.0);
    →printf("FSIN(0):     should=     0.000000/   0.000000e+00 is=%12f/%15e\n");
    v0[v1] = fsin(3.141592653589793 / (double)6);
    →printf("FSIN(pi/6):  should=     0.500000/   5.000000e-01 is=%12f/%15e\n");
    v0[v1] = fsin(1.5707963267948966);
    →printf("FSIN(pi/2):  should=     1.000000/   1.000000e+00 is=%12f/%15e\n");
    return 0;
}

int FSINCOS(double param0, int param1) {
    v0[v1] = fsincos(param0);
    →printf("FSINCOS(para)[0=cos]:  should=                              is=%12f/%15e\n");
    v0[v1] = fsincos(param0);
    →printf("FSINCOS(para)[1=sin]:  should=                              is=%12f/%15e\n");
    v0[v1] = fsincos(0.0);
    →printf("FSINCOS(0)[0=cos]:     should=     1.000000/   1.000000e+00 is=%12f/%15e\n");
    v0[v1] = fsincos(0.0);
    →printf("FSINCOS(0)[1=sin]:     should=     0.000000/   0.000000e+00 is=%12f/%15e\n");
    return 0;
}

int FSQRT(double param0, int param1) {
    v0[v1] = fsqrt(param0);
    →printf("FSQRT(para):     should=                             is=%12f/%15e\n");
    v0[v1] = fsqrt(3.141592653589793);
    →printf("FSQRT(pi):       should=    1.772454/   1.772454e+00 is=%12f/%15e\n");
    v0[v1] = fsqrt(152.2756);
    →printf("FSQRT(152.2756): should=   12.340000/   1.234000e+01 is=%12f/%15e\n");
    return 0;
}

int FST() {
    *(int*)&buffer = (unsigned char)1078530011;
    →printf("FST(pi as float)       should=0xdb 0x0f 0x49 0x40                               is=0x%02x 0x%02x 0x%02x 0x%02x\n");
    *(long long*)&buffer = (unsigned char)4614256656552045848L;
    →printf("FST(pi as double)      should=0x18 0x2d 0x44 0x54 0xfb 0x21 0x09 0x40           is=0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x\n");
    *(__int128*)&buffer = (unsigned char)0x4000C90FDAA22168C000X;
    →printf("FST(pi as long double) should=0x35 0xc2 0x68 0x21 0xa2 0xda 0x0f 0xc9 0x00 0x40 is=0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x\n");
    return 0;
}

int FSUB(double param0, int param1) {
    →printf("FSUB(1-para):     should=                             is=%12f/%15e\n");
    →printf("FSUB(para-12.34): should=                             is=%12f/%15e\n");
    →printf("FSUB(1-pi):       should=   -2.141593/  -2.141593e+00 is=%12f/%15e\n");
    →printf("FISUB(pi-1000):   should= -996.858407/  -9.968584e+02 is=%12f/%15e\n");
    return 0;
}

int FTST(double param0, int param1) {
    short v0;
    short v1;
    short v2;
    short v3;
    short v4;
    __int128 v5;
    ftst(param0);
    fnstsw(v4);
    →printf("FTST(para): should=0x0100 is=0x%04x\n");
    ftst(3.141592653589793);
    fnstsw(v0);
    →printf("FTST(pi):   should=0x0000 is=0x%04x\n");
    v6[v7] = fchs(3.141592653589793);
    ftst(v5);
    fnstsw(v1);
    →printf("FTST(-pi):  should=0x0100 is=0x%04x\n");
    ftst(0.0);
    fnstsw(v2);
    →printf("FTST(0.0):  should=0x4000 is=0x%04x\n");
    ftst(NaN);
    fnstsw(v3);
    →printf("FTST(nan):  should=0x4500 is=0x%04x\n");
    return 0;
}

short FXAM(double param0, int param1) {
    short v0;
    short v1;
    short v2;
    short v3;
    short v4;
    short v5;
    fxam(param0);
    fnstsw(v5);
    →printf("FXAM(para):  should=0x0400 is=0x%04x\n");
    fxam(3.141592653589793);
    fnstsw(v0);
    →printf("FXAM(pi):    should=0x0400 is=0x%04x\n");
    fxam(0.0);
    fnstsw(v1);
    →printf("FXAM(0.0):   should=0x4000 is=0x%04x\n");
    fxam(NaN);
    fnstsw(v2);
    →printf("FXAM(nan):   should=0x0100 is=0x%04x\n");
    fxam(Infinity);
    fnstsw(v3);
    →printf("FXAM(inf):   should=0x0500 is=0x%04x\n");
    fxam(param0);
    fnstsw(v4);
    →printf("FXAM(empty): should=0x4100 is=0x%04x\n");
    return 0;
}

int FXCH(double param0, int param1) {
    →printf("FXCH(para):  should=                             is=%12f/%15e\n");
    →printf("FXCH(pi):    should=    3.141593/   3.141593e+00 is=%12f/%15e\n");
    return 0;
}

int FXTRACT(double param0, int param1) {
    v0[v1] = fxtract(param0);
    →printf("FXTRACT(para)[0=signi]:  should=                             is=%12f/%15e\n");
    v0[v1] = fxtract(param0);
    →printf("FXTRACT(para)[1=exp]:    should=                             is=%12f/%15e\n");
    v0[v1] = fxtract(12.34);
    →printf("FXTRACT(12.34)[0=signi]: should=    1.542500/   1.542500e+00 is=%12f/%15e\n");
    v0[v1] = fxtract(12.34);
    →printf("FXTRACT(12.34)[1=exp]:   should=    3.000000/   3.000000e+00 is=%12f/%15e\n");
    return 0;
}

int FYL2X(double param0, int param1) {
    v0[v1 + 1] = fyl2x(1.0, param0);
    →printf("FYL2X(para, base=2):  should=                             is=%12f/%15e\n");
    v0[v1 + 1] = fyl2x(1.0, (double)1000);
    →printf("FYL2X(1000, base=2):  should=    9.965784/   9.965784e+00 is=%12f/%15e\n");
    v0[v1 + 1] = fyl2x(0.6931471805599453, (double)1000);
    →printf("FYL2X(1000, base=e):  should=    6.907755/   6.907755e+00 is=%12f/%15e\n");
    v0[v1 + 1] = fyl2x(0.3010299956639812, (double)1000);
    →printf("FYL2X(1000, base=10): should=    3.000000/   3.000000e+00 is=%12f/%15e\n");
    return 0;
}

int FYL2XP1(double param0, int param1) {
    v0[v1 + 1] = fyl2xp1(1.0, param0);
    →printf("FYL2XP1(para, base=2): should=                             is=%12f/%15e\n");
    v0[v1 + 1] = fyl2xp1(1.0, (double)999);
    →printf("FYL2XP1(999, base=2):  should=    9.965784/   9.965784e+00 is=%12f/%15e\n");
    v0[v1 + 1] = fyl2xp1(0.6931471805599453, (double)999);
    →printf("FYL2XP1(999, base=e):  should=    6.907755/   6.907755e+00 is=%12f/%15e\n");
    v0[v1 + 1] = fyl2xp1(0.3010299956639812, (double)999);
    →printf("FYL2XP1(999, base=10): should=    3.000000/   3.000000e+00 is=%12f/%15e\n");
    return 0;
}

int NOT_EXECUTED() {
    __int128 v0;
    →puts("before FNOP");
    →puts("before FNCLEX");
    fnclex();
    →puts("before FDECSTP");
    →puts("before FFREE(st(4))");
    ffree(v0);
    →puts("before FINCSTP");
    →puts("before FNINIT");
    fninit();
    →puts("before FNSAVE");
    fnsave(*(unsigned char*)&buffer);
    →puts("before FNSTCW");
    *(short*)&buffer = fnstcw();
    →puts("before FNSTENV");
    *(__int128*)&buffer = fnstenv();
    →puts("before FNSTSW");
    fnstsw(*(short*)&buffer);
    →puts("before FRSTOR");
    frstor(*(unsigned char*)&buffer);
    →puts("before FWAIT");
    →puts("before FXRSTOR");
    fxrstor(&buffer);
    →puts("before FXSAVE");
    &buffer = fxsave();
    return 0;
}

int TOP() {
    short v0;
    fnstsw(v0);
    return ((unsigned int)v0 >>> 11) & 0x7;
}

int main(unsigned int param0) {
    int v0;
    int v1;
    int v2;
    int v3;
    int v4;
    int v5 = v0;
    int v6 = v4;
    int* ptr0 = &param0;
    *(long long*)&v1 = 0.5;
    F2XM1();
    int v7 = TOP();
    if(v7) {
        →printf("top=%d\n");
        if(v7) {
            /*NO_RETURN*/ →__assert_fail("top==0", "source.c", 48, (char*)&__PRETTY_FUNCTION__.3086);
        }
    }
    →putchar(10);
    *(long long*)&v1 = 0.5;
    FABS(*(double*)&v1, v2);
    int v8 = TOP();
    if(v8) {
        →printf("top=%d\n");
        if(v8) {
            /*NO_RETURN*/ →__assert_fail("top==0", "source.c", 52, (char*)&__PRETTY_FUNCTION__.3086);
        }
    }
    →putchar(10);
    *(long long*)&v1 = 0.5;
    FADD(0, v3);
    int v9 = TOP();
    if(v9) {
        →printf("top=%d\n");
        if(v9) {
            /*NO_RETURN*/ →__assert_fail("top==0", "source.c", 56, (char*)&__PRETTY_FUNCTION__.3086);
        }
    }
    →putchar(10);
    FBSTP();
    int v10 = TOP();
    if(v10) {
        →printf("top=%d\n");
        if(v10) {
            /*NO_RETURN*/ →__assert_fail("top==0", "source.c", 60, (char*)&__PRETTY_FUNCTION__.3086);
        }
    }
    →putchar(10);
    FBLD();
    int v11 = TOP();
    if(v11) {
        →printf("top=%d\n");
        if(v11) {
            /*NO_RETURN*/ →__assert_fail("top==0", "source.c", 64, (char*)&__PRETTY_FUNCTION__.3086);
        }
    }
    →putchar(10);
    *(long long*)&v1 = -0.5;
    FCHS(*(double*)&v1, v2);
    int v12 = TOP();
    if(v12) {
        →printf("top=%d\n");
        if(v12) {
            /*NO_RETURN*/ →__assert_fail("top==0", "source.c", 68, (char*)&__PRETTY_FUNCTION__.3086);
        }
    }
    →putchar(10);
    FCMOV(0);
    int v13 = TOP();
    if(v13) {
        →printf("top=%d\n");
        if(v13) {
            /*NO_RETURN*/ →__assert_fail("top==0", "source.c", 72, (char*)&__PRETTY_FUNCTION__.3086);
        }
    }
    FCMOV(-1);
    int v14 = TOP();
    if(v14) {
        →printf("top=%d\n");
        if(v14) {
            /*NO_RETURN*/ →__assert_fail("top==0", "source.c", 74, (char*)&__PRETTY_FUNCTION__.3086);
        }
    }
    →putchar(10);
    *(long long*)&v1 = 0.5;
    FCOM(0, v3);
    int v15 = TOP();
    if(v15) {
        →printf("top=%d\n");
        if(v15) {
            /*NO_RETURN*/ →__assert_fail("top==0", "source.c", 78, (char*)&__PRETTY_FUNCTION__.3086);
        }
    }
    →putchar(10);
    *(long long*)&v1 = 0.5;
    FCOMI(*(double*)&v1, v2);
    int v16 = TOP();
    if(v16) {
        →printf("top=%d\n");
        if(v16) {
            /*NO_RETURN*/ →__assert_fail("top==0", "source.c", 82, (char*)&__PRETTY_FUNCTION__.3086);
        }
    }
    →putchar(10);
    *(long long*)&v1 = 0.5;
    FCOS(*(double*)&v1, v2);
    int v17 = TOP();
    if(v17) {
        →printf("top=%d\n");
        if(v17) {
            /*NO_RETURN*/ →__assert_fail("top==0", "source.c", 86, (char*)&__PRETTY_FUNCTION__.3086);
        }
    }
    →putchar(10);
    *(long long*)&v1 = 0.5;
    FDIV(*(double*)&v1, v2);
    int v18 = TOP();
    if(v18) {
        →printf("top=%d\n");
        if(v18) {
            /*NO_RETURN*/ →__assert_fail("top==0", "source.c", 90, (char*)&__PRETTY_FUNCTION__.3086);
        }
    }
    →putchar(10);
    *(long long*)&v1 = 0.5;
    FDIVR(*(double*)&v1, v2);
    int v19 = TOP();
    if(v19) {
        →printf("top=%d\n");
        if(v19) {
            /*NO_RETURN*/ →__assert_fail("top==0", "source.c", 94, (char*)&__PRETTY_FUNCTION__.3086);
        }
    }
    →putchar(10);
    FILD();
    int v20 = TOP();
    if(v20) {
        →printf("top=%d\n");
        if(v20) {
            /*NO_RETURN*/ →__assert_fail("top==0", "source.c", 98, (char*)&__PRETTY_FUNCTION__.3086);
        }
    }
    →putchar(10);
    *(long long*)&v1 = 12.345;
    FIST();
    int v21 = TOP();
    if(v21) {
        →printf("top=%d\n");
        if(v21) {
            /*NO_RETURN*/ →__assert_fail("top==0", "source.c", 102, (char*)&__PRETTY_FUNCTION__.3086);
        }
    }
    →putchar(10);
    FLD();
    int v22 = TOP();
    if(v22) {
        →printf("top=%d\n");
        if(v22) {
            /*NO_RETURN*/ →__assert_fail("top==0", "source.c", 106, (char*)&__PRETTY_FUNCTION__.3086);
        }
    }
    →putchar(10);
    FLDC();
    int v23 = TOP();
    if(v23) {
        →printf("top=%d\n");
        if(v23) {
            /*NO_RETURN*/ →__assert_fail("top==0", "source.c", 110, (char*)&__PRETTY_FUNCTION__.3086);
        }
    }
    →putchar(10);
    *(long long*)&v1 = 0.5;
    FMUL(*(double*)&v1, v2);
    int v24 = TOP();
    if(v24) {
        →printf("top=%d\n");
        if(v24) {
            /*NO_RETURN*/ →__assert_fail("top==0", "source.c", 114, (char*)&__PRETTY_FUNCTION__.3086);
        }
    }
    →putchar(10);
    *(long long*)&v1 = 0.5;
    FPATAN(*(double*)&v1, v2);
    int v25 = TOP();
    if(v25) {
        →printf("top=%d\n");
        if(v25) {
            /*NO_RETURN*/ →__assert_fail("top==0", "source.c", 118, (char*)&__PRETTY_FUNCTION__.3086);
        }
    }
    →putchar(10);
    *(long long*)&v1 = 7757013.73512878;
    FPREM(*(double*)&v1, v2);
    int v26 = TOP();
    if(v26) {
        →printf("top=%d\n");
        if(v26) {
            /*NO_RETURN*/ →__assert_fail("top==0", "source.c", 122, (char*)&__PRETTY_FUNCTION__.3086);
        }
    }
    →putchar(10);
    *(long long*)&v1 = 0.5;
    FPTAN(*(double*)&v1, v2);
    int v27 = TOP();
    if(v27) {
        →printf("top=%d\n");
        if(v27) {
            /*NO_RETURN*/ →__assert_fail("top==0", "source.c", 126, (char*)&__PRETTY_FUNCTION__.3086);
        }
    }
    →putchar(10);
    *(long long*)&v1 = 0.8;
    FRNDINT(*(double*)&v1, v2);
    int v28 = TOP();
    if(v28) {
        →printf("top=%d\n");
        if(v28) {
            /*NO_RETURN*/ →__assert_fail("top==0", "source.c", 130, (char*)&__PRETTY_FUNCTION__.3086);
        }
    }
    →putchar(10);
    *(long long*)&v1 = 2.8;
    FSCALE(*(double*)&v1, v2);
    int v29 = TOP();
    if(v29) {
        →printf("top=%d\n");
        if(v29) {
            /*NO_RETURN*/ →__assert_fail("top==0", "source.c", 134, (char*)&__PRETTY_FUNCTION__.3086);
        }
    }
    →putchar(10);
    *(long long*)&v1 = 0.5;
    FSIN(*(double*)&v1, v2);
    int v30 = TOP();
    if(v30) {
        →printf("top=%d\n");
        if(v30) {
            /*NO_RETURN*/ →__assert_fail("top==0", "source.c", 138, (char*)&__PRETTY_FUNCTION__.3086);
        }
    }
    →putchar(10);
    *(long long*)&v1 = 0.5;
    FSINCOS(*(double*)&v1, v2);
    int v31 = TOP();
    if(v31) {
        →printf("top=%d\n");
        if(v31) {
            /*NO_RETURN*/ →__assert_fail("top==0", "source.c", 142, (char*)&__PRETTY_FUNCTION__.3086);
        }
    }
    →putchar(10);
    *(long long*)&v1 = 2.0;
    FSQRT(*(double*)&v1, v2);
    int v32 = TOP();
    if(v32) {
        →printf("top=%d\n");
        if(v32) {
            /*NO_RETURN*/ →__assert_fail("top==0", "source.c", 146, (char*)&__PRETTY_FUNCTION__.3086);
        }
    }
    →putchar(10);
    *(long long*)&v1 = 0.5;
    FST();
    int v33 = TOP();
    if(v33) {
        →printf("top=%d\n");
        if(v33) {
            /*NO_RETURN*/ →__assert_fail("top==0", "source.c", 150, (char*)&__PRETTY_FUNCTION__.3086);
        }
    }
    →putchar(10);
    *(long long*)&v1 = 0.8;
    FSUB(*(double*)&v1, v2);
    int v34 = TOP();
    if(v34) {
        →printf("top=%d\n");
        if(v34) {
            /*NO_RETURN*/ →__assert_fail("top==0", "source.c", 154, (char*)&__PRETTY_FUNCTION__.3086);
        }
    }
    →putchar(10);
    *(long long*)&v1 = -42.0;
    FTST(*(double*)&v1, v2);
    int v35 = TOP();
    if(v35) {
        →printf("top=%d\n");
        if(v35) {
            /*NO_RETURN*/ →__assert_fail("top==0", "source.c", 158, (char*)&__PRETTY_FUNCTION__.3086);
        }
    }
    →putchar(10);
    *(long long*)&v1 = 0.5;
    FXAM(*(double*)&v1, v2);
    int v36 = TOP();
    if(v36) {
        →printf("top=%d\n");
        if(v36) {
            /*NO_RETURN*/ →__assert_fail("top==0", "source.c", 162, (char*)&__PRETTY_FUNCTION__.3086);
        }
    }
    →putchar(10);
    *(long long*)&v1 = 0.5;
    FXCH(*(double*)&v1, v2);
    int v37 = TOP();
    if(v37) {
        →printf("top=%d\n");
        if(v37) {
            /*NO_RETURN*/ →__assert_fail("top==0", "source.c", 166, (char*)&__PRETTY_FUNCTION__.3086);
        }
    }
    →putchar(10);
    *(long long*)&v1 = 0.5;
    FXTRACT(*(double*)&v1, v2);
    int v38 = TOP();
    if(v38) {
        →printf("top=%d\n");
        if(v38) {
            /*NO_RETURN*/ →__assert_fail("top==0", "source.c", 0xaa, (char*)&__PRETTY_FUNCTION__.3086);
        }
    }
    →putchar(10);
    *(long long*)&v1 = 256.0;
    FYL2X(*(double*)&v1, v2);
    int v39 = TOP();
    if(v39) {
        →printf("top=%d\n");
        if(v39) {
            /*NO_RETURN*/ →__assert_fail("top==0", "source.c", 174, (char*)&__PRETTY_FUNCTION__.3086);
        }
    }
    →putchar(10);
    *(long long*)&v1 = 255.0;
    FYL2XP1(*(double*)&v1, v2);
    int v40 = TOP();
    if(v40) {
        →printf("top=%d\n");
        if(v40) {
            /*NO_RETURN*/ →__assert_fail("top==0", "source.c", 178, (char*)&__PRETTY_FUNCTION__.3086);
        }
    }
    →putchar(10);
    if(param0 == 42) {
        NOT_EXECUTED();
    }
    return 0;
}

int sub_8049036() {
    return gvar_8050008();
}

void sub_80490C7() {
}

int sub_80490FC() {
    return 0;
}

void sub_8049148() {
}

int sub_804917D() {
    int result = deregister_tm_clones();
    completed.6844 = 1;
    return result;
}

void sub_8049198() {
}

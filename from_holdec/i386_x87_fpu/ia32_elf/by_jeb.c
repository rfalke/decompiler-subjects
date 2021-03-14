
int F2XM1() {
    __SyntheticTypeUnknownF v0;
    __SyntheticTypeUnknownF v1;
    __SyntheticTypeUnknownF v2;
    fld1();
    fchs();
    f2xm1();
    →printf("F2XM1(-1):   should=   -0.500000/  -5.000000e-01 is=%12f/%15e\n", v1, v1);
    fldz();
    f2xm1();
    →printf("F2XM1(0):    should=    0.000000/   0.000000e+00 is=%12f/%15e\n", v0, v0);
    fld1();
    f2xm1();
    →printf("F2XM1(+1):   should=    1.000000/   1.000000e+00 is=%12f/%15e\n", v0, v0);
    fldpi();
    fld1();
    v3[v4 + 1] = fdivrp(v1, v0);
    f2xm1();
    →printf("F2XM1(1/pi): should=    0.246869/   2.468690e-01 is=%12f/%15e\n", v2, v2);
    return 0;
}

int FABS(double param0, int param1) {
    fabs();
    →printf("FABS(para):   should=                            is=%12f/%15e\n", param0, param0);
    fld1();
    fchs();
    fabs();
    →printf("FABS(-1):   should=     1.000000/   1.000000e+00 is=%12f/%15e\n", param0, param0);
    fldz();
    fchs();
    fabs();
    →printf("FABS(-0):    should=    0.000000/   0.000000e+00 is=%12f/%15e\n", param0, param0);
    fld1();
    fabs();
    →printf("FABS(+1):   should=     1.000000/   1.000000e+00 is=%12f/%15e\n", param0, param0);
    return 0;
}

int FBLD() {
    __SyntheticTypeUnknownF v0;
    *(__int128*)&readbuffer = fbld(*(__int128*)&readbuffer);
    →printf("FBLD(0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x): should=-123456789088776656.000000/  -1.234568e+17 is=%12f/%15e\n", 85, 102, 119, 0x88, 144, 120, 86, 52, 18, 128, v0, v0);
    return 0;
}

int FBSTP() {
    fchs();
    *(__int128*)&buffer = fbstp(*(__int128*)&buffer);
    fchs();
    →printf("FBSTP(%f) should=0x44 0x33 0x22 0x11 0x90 0x78 0x56 0x34 0x12 0x80 is=0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x\n", 1.23456789011223344E17, (unsigned int)buffer, (unsigned int)gvar_8050029, (unsigned int)gvar_805002A, (unsigned int)gvar_805002B, (unsigned int)gvar_805002C, (unsigned int)gvar_805002D, (unsigned int)gvar_805002E, (unsigned int)gvar_805002F, (unsigned int)gvar_8050030, (unsigned int)gvar_8050031);
    return 0;
}

int FCHS(double param0, int param1) {
    __int128 v0;
    __SyntheticTypeUnknownF v1;
    fchs();
    →printf((char*)0x804C508, param0, param0);
    fldpi();
    fchs();
    →printf("FCHS(pi):    should=   -3.141593/  -3.141593e+00 is=%12f/%15e\n", param0, param0);
    fldpi();
    fldz();
    v2[v3 + 1] = fsubrp(v0, param0);
    fchs();
    →printf("FCHS(0-pi):  should=    3.141593/   3.141593e+00 is=%12f/%15e\n", v1, v1);
    return 0;
}

int FCMOV(int param0) {
    __int128 v0;
    __int128 v1;
    __SyntheticTypeUnknownF v2;
    __SyntheticTypeUnknownF v3;
    __int128 v4;
    __SyntheticTypeUnknownF v5;
    __SyntheticTypeUnknownF v6;
    __SyntheticTypeUnknownF v7;
    __SyntheticTypeUnknownF v8;
    __SyntheticTypeUnknownF v9;
    __int128 v10;
    __int128 v11;
    __int128 v12;
    __int128 v13;
    __SyntheticTypeUnknownF v14;
    __int128 v15;
    __int128 v16;
    →printf("using EFLAGS=0x%0x\n", (unsigned int)(unsigned char)(param0 >>> 8));
    fld1();
    fldpi();
    v17[v18] = fcmovb(v0, v4);
    →printf("  FCMOV(below ? 1 : pi):           should=                             is=%12f/%15e\n", v8, v8);
    fld1();
    fldpi();
    v17[v18] = fcmove(v8, v16);
    →printf("  FCMOV(equal ? 1 : pi):           should=                             is=%12f/%15e\n", v5, v5);
    fld1();
    fldpi();
    v17[v18] = fcmovbe(v5, v10);
    →printf("  FCMOV(below_or_equal ? 1 : pi):  should=                             is=%12f/%15e\n", v6, v6);
    fld1();
    fldpi();
    v17[v18] = fcmovu(v6, v12);
    →printf("  FCMOV(unordered ? 1 : pi):       should=                             is=%12f/%15e\n", v9, v9);
    fld1();
    fldpi();
    v17[v18] = fcmovnb(v9, v11);
    →printf("  FCMOV(!below ? 1 : pi):          should=                             is=%12f/%15e\n", v14, v14);
    fld1();
    fldpi();
    v17[v18] = fcmovne(v14, v13);
    →printf("  FCMOV(!equal ? 1 : pi):          should=                             is=%12f/%15e\n", v2, v2);
    fld1();
    fldpi();
    v17[v18] = fcmovnbe(v2, v15);
    →printf("  FCMOV(!below_or_equal ? 1 : pi): should=                             is=%12f/%15e\n", v3, v3);
    fld1();
    fldpi();
    v17[v18] = fcmovnu(v3, v1);
    →printf("  FCMOV(!unordered ? 1 : pi):      should=                             is=%12f/%15e\n", v7, v7);
    return 0;
}

int FCOM(int param0) {
    short v0;
    short v1;
    short v2;
    short v3;
    short v4;
    short v5;
    short v6;
    short v7;
    short v8;
    __int128 v9;
    __int128 v10;
    fld1();
    param0 = fcomp(param0);
    wait();
    v8 = fnstsw(v8);
    int v11 = →printf("FCOM(1,para): should=0x0000 is=0x%04x\n", (unsigned int)(v0 & 0x4500));
    fld1();
    fcompp();
    wait();
    short v20 = fnstsw((unsigned short)v11);
    int v12 = →printf("FCOM(para,1): should=0x0100 is=0x%04x\n", (unsigned int)(v1 & 0x4500));
    fld1();
    fldpi();
    fcompp();
    wait();
    short v21 = fnstsw((unsigned short)v12);
    int v13 = →printf("FCOM(pi,1):   should=0x0000 is=0x%04x\n", (unsigned int)(v2 & 0x4500));
    fldpi();
    fld1();
    fcompp();
    wait();
    short v22 = fnstsw((unsigned short)v13);
    int v14 = →printf("FCOM(1,pi):   should=0x0100 is=0x%04x\n", (unsigned int)(v3 & 0x4500));
    fld1();
    fld1();
    fcompp();
    wait();
    short v23 = fnstsw((unsigned short)v14);
    int v15 = →printf("FCOM(1,1):    should=0x4000 is=0x%04x\n", (unsigned int)(v4 & 0x4500));
    fldz();
    fldz();
    v18[v19 + 1] = fdivrp(v10, v9);
    fld1();
    fcompp();
    wait();
    short v24 = fnstsw((unsigned short)v15);
    int v16 = →printf("FCOM(1,nan):  should=0x4500 is=0x%04x\n", (unsigned int)(v5 & 0x4500));
    fldpi();
    3 = ficomp(3);
    wait();
    short v25 = fnstsw((unsigned short)v16);
    int v17 = →printf("FICOM(pi,3):  should=0x0000 is=0x%04x\n", (unsigned int)(v6 & 0x4500));
    fldpi();
    4 = ficomp(4);
    wait();
    short v26 = fnstsw((unsigned short)v17);
    →printf("FICOM(pi,4):  should=0x0100 is=0x%04x\n", (unsigned int)(v7 & 0x4500));
    return 0;
}

int FCOMI(double param0, int param1) {
    int v0;
    char v1;
    __int128 v2;
    __int128 v3;
    __int128 v4;
    __int128 v5;
    __int128 v6;
    __int128 v7;
    __int128 v8;
    __int128 v9;
    __int128 v10;
    __int128 v11;
    __int128 v12;
    __int128 v13;
    fld1();
    v14[v15] = fcomip(param0, v9);
    →printf("FCOMI(1,para): should=0x00 is=0x%02x\n", (unsigned int)(((unsigned char)((unsigned int)&v0 < 40) | ((unsigned char)1 << 1) | ((unsigned char)__parity__((unsigned char)&v1) << 2) | ((unsigned char)0 << 3) | ((unsigned char)(int*)((int)(int*)((int)(int*)((int)(int*)((int)&v0 ^ 0x28) ^ (int)&v1) >>> 4) & 0x1) << 4) | ((unsigned char)0 << 5) | ((unsigned char)(&v0 == 40) << 6) | ((unsigned char)((int)&v1 < 0) << 7)) & 0x45));
    fld1();
    v14[v15] = fcomip(param0, v7);
    →printf("FCOMI(para,1): should=0x01 is=0x%02x\n", (unsigned int)(((unsigned char)((unsigned int)&v0 < 40) | ((unsigned char)1 << 1) | ((unsigned char)__parity__((unsigned char)&v1) << 2) | ((unsigned char)0 << 3) | ((unsigned char)(int*)((int)(int*)((int)(int*)((int)(int*)((int)&v0 ^ 0x28) ^ (int)&v1) >>> 4) & 0x1) << 4) | ((unsigned char)0 << 5) | ((unsigned char)(&v0 == 40) << 6) | ((unsigned char)((int)&v1 < 0) << 7)) & 0x45));
    fld1();
    fldpi();
    v14[v15] = fcomip(v12, v13);
    →printf("FCOMI(pi,1):   should=0x00 is=0x%02x\n", (unsigned int)(((unsigned char)((unsigned int)&v0 < 40) | ((unsigned char)1 << 1) | ((unsigned char)__parity__((unsigned char)&v1) << 2) | ((unsigned char)0 << 3) | ((unsigned char)(int*)((int)(int*)((int)(int*)((int)(int*)((int)&v0 ^ 0x28) ^ (int)&v1) >>> 4) & 0x1) << 4) | ((unsigned char)0 << 5) | ((unsigned char)(&v0 == 40) << 6) | ((unsigned char)((int)&v1 < 0) << 7)) & 0x45));
    fldpi();
    fld1();
    v14[v15] = fcomip(v5, v2);
    →printf("FCOMI(1,pi):   should=0x01 is=0x%02x\n", (unsigned int)(((unsigned char)((unsigned int)&v0 < 40) | ((unsigned char)1 << 1) | ((unsigned char)__parity__((unsigned char)&v1) << 2) | ((unsigned char)0 << 3) | ((unsigned char)(int*)((int)(int*)((int)(int*)((int)(int*)((int)&v0 ^ 0x28) ^ (int)&v1) >>> 4) & 0x1) << 4) | ((unsigned char)0 << 5) | ((unsigned char)(&v0 == 40) << 6) | ((unsigned char)((int)&v1 < 0) << 7)) & 0x45));
    fld1();
    fld1();
    v14[v15] = fcomip(v10, v3);
    →printf("FCOMI(1,1):    should=0x40 is=0x%02x\n", (unsigned int)(((unsigned char)((unsigned int)&v0 < 40) | ((unsigned char)1 << 1) | ((unsigned char)__parity__((unsigned char)&v1) << 2) | ((unsigned char)0 << 3) | ((unsigned char)(int*)((int)(int*)((int)(int*)((int)(int*)((int)&v0 ^ 0x28) ^ (int)&v1) >>> 4) & 0x1) << 4) | ((unsigned char)0 << 5) | ((unsigned char)(&v0 == 40) << 6) | ((unsigned char)((int)&v1 < 0) << 7)) & 0x45));
    fldz();
    fldz();
    v14[v15 + 1] = fdivrp(v6, v11);
    fld1();
    v14[v15] = fcomip(v4, v8);
    →printf("FCOMI(1,nan):  should=0x45 is=0x%02x\n", (unsigned int)(((unsigned char)((unsigned int)&v0 < 40) | ((unsigned char)1 << 1) | ((unsigned char)__parity__((unsigned char)&v1) << 2) | ((unsigned char)0 << 3) | ((unsigned char)(int*)((int)(int*)((int)(int*)((int)(int*)((int)&v0 ^ 0x28) ^ (int)&v1) >>> 4) & 0x1) << 4) | ((unsigned char)0 << 5) | ((unsigned char)(&v0 == 40) << 6) | ((unsigned char)((int)&v1 < 0) << 7)) & 0x45));
    return 0;
}

int FCOS(double param0, int param1) {
    __SyntheticTypeUnknownF v0;
    __int128 v1;
    __SyntheticTypeUnknownF v2;
    __SyntheticTypeUnknownF v3;
    __SyntheticTypeUnknownF v4;
    fcos();
    →printf("FCOS(para):  should=                              is=%12f/%15e\n", param0, param0);
    fldz();
    fcos();
    →printf("FCOS(0):     should=     1.000000/   1.000000e+00 is=%12f/%15e\n", param0, param0);
    fld1();
    fld1();
    fld1();
    fldpi();
    v5[v6 + 1] = fdivrp(v1, v0 + (v2 + param0));
    fcos();
    →printf("FCOS(pi/3):  should=     0.500000/   5.000000e-01 is=%12f/%15e\n", v3, v3);
    fldpi();
    fcos();
    →printf("FCOS(pi):    should=    -1.000000/  -1.000000e+00 is=%12f/%15e\n", v4, v4);
    return 0;
}

int FDIV(double param0, int param1) {
    __int128 v0;
    __SyntheticTypeUnknownF v1;
    __int128 v2;
    __SyntheticTypeUnknownF v3;
    __SyntheticTypeUnknownF v4;
    __int128 v5;
    fld1();
    v6[v7 + 1] = fdivrp(v0, param0);
    →printf("FDIV(1/para):     should=                             is=%12f/%15e\n", v3, v3);
    v6[v7 + 1] = fdivrp(12.34, param0);
    →printf("FDIV(para/12.34): should=                             is=%12f/%15e\n", v4, v4);
    fldpi();
    fld1();
    v6[v7 + 1] = fdivrp(v5, v2);
    →printf("FDIV(1/pi):       should=    0.318310/   3.183099e-01 is=%12f/%15e\n", v1, v1);
    fldpi();
    →printf("FIDIV(pi/1000):   should=    0.003142/   3.141593e-03 is=%12f/%15e\n", v1 / (double)1000, v1 / (double)1000);
    return 0;
}

int FDIVR(double param0, int param1) {
    __SyntheticTypeUnknownF v0;
    fld1();
    __SyntheticTypeUnknownF v1 = v0 / param0;
    →printf("FDIVR(1/para):     should=                             is=%12f/%15e\n", v1, v1);
    →printf("FDIVR(para/12.34): should=                             is=%12f/%15e\n", param0 / 12.34, param0 / 12.34);
    fld1();
    fldpi();
    __SyntheticTypeUnknownF v2 = v1 / param0;
    →printf("FDIVR(1/pi):       should=    0.318310/   3.183099e-01 is=%12f/%15e\n", v2, v2);
    fldpi();
    1000 = fidivr(1000);
    →printf("FIDIVR(1000/pi):   should=  318.309886/   3.183099e+02 is=%12f/%15e\n", param0, param0);
    return 0;
}

int FILD() {
    __SyntheticTypeUnknownF v0 = (double)10000;
    →printf("FILD(10k):  should=             10000.000000/   1.000000e+04 is=%25f/%15e\n", v0, v0);
    __SyntheticTypeUnknownF v1 = (double)1000000000;
    →printf("FILD(1G):   should=        1000000000.000000/   1.000000e+09 is=%25f/%15e\n", v1, v1);
    __SyntheticTypeUnknownF v2 = (double)1000000000000000L;
    →printf("FILD(1P):   should=  1000000000000000.000000/   1.000000e+15 is=%25f/%15e\n", v2, v2);
    return 0;
}

int FIST() {
    int v0;
    int v1;
    →puts("FIST:\n  RC=00: to nearest\n  RC=01: down to -inf\n  RC=10: up to +inf\n  RC=11: to zero\n");
    v0 = fisttp(v0);
    →printf("  FISTT(%f):        should=12 is=%d\n", 0x4029666666666666L, v0);
    (unsigned short)(v1 >>> 16) = fnstcw((unsigned short)(v1 >>> 16));
    short v2 = (unsigned short)(v1 >>> 16);
    (v1 >>> 16) & 0xFFFF = 127;
    (unsigned short)(v1 >>> 16) = fldcw((unsigned short)(v1 >>> 16));
    (v1 >>> 16) & 0xFFFF = v2;
    fist();
    (unsigned short)(v1 >>> 16) = fldcw((unsigned short)(v1 >>> 16));
    →printf("  FIST(%f,RC=00):   should=13 is=%d\n", 12.7, v0);
    (unsigned short)(v1 >>> 16) = fnstcw((unsigned short)(v1 >>> 16));
    short v3 = (unsigned short)(v1 >>> 16);
    (v1 >>> 16) & 0xFFFF = 1151;
    (unsigned short)(v1 >>> 16) = fldcw((unsigned short)(v1 >>> 16));
    (v1 >>> 16) & 0xFFFF = v3;
    fist();
    (unsigned short)(v1 >>> 16) = fldcw((unsigned short)(v1 >>> 16));
    →printf("  FIST(%f,RC=01):   should=12 is=%d\n", (double)12.7, v0);
    (unsigned short)(v1 >>> 16) = fnstcw((unsigned short)(v1 >>> 16));
    short v4 = (unsigned short)(v1 >>> 16);
    (v1 >>> 16) & 0xFFFF = 2175;
    (unsigned short)(v1 >>> 16) = fldcw((unsigned short)(v1 >>> 16));
    (v1 >>> 16) & 0xFFFF = v4;
    fist();
    (unsigned short)(v1 >>> 16) = fldcw((unsigned short)(v1 >>> 16));
    →printf("  FIST(%f,RC=10):   should=13 is=%d\n", (double)12.7, v0);
    (unsigned short)(v1 >>> 16) = fnstcw((unsigned short)(v1 >>> 16));
    short v5 = (unsigned short)(v1 >>> 16);
    (v1 >>> 16) & 0xFFFF = 3199;
    (unsigned short)(v1 >>> 16) = fldcw((unsigned short)(v1 >>> 16));
    (v1 >>> 16) & 0xFFFF = v5;
    fist();
    (unsigned short)(v1 >>> 16) = fldcw((unsigned short)(v1 >>> 16));
    →printf("  FIST(%f,RC=11):   should=12 is=%d\n", (double)12.7, v0);
    v0 = fisttp(v0);
    →printf("  FISTT(%f):        should=-7 is=%d\n", (double)-7.1, v0);
    (unsigned short)(v1 >>> 16) = fnstcw((unsigned short)(v1 >>> 16));
    short v6 = (unsigned short)(v1 >>> 16);
    (v1 >>> 16) & 0xFFFF = 127;
    (unsigned short)(v1 >>> 16) = fldcw((unsigned short)(v1 >>> 16));
    (v1 >>> 16) & 0xFFFF = v6;
    fist();
    (unsigned short)(v1 >>> 16) = fldcw((unsigned short)(v1 >>> 16));
    →printf("  FIST(%f,RC=00):   should=-7 is=%d\n", (double)-7.1, v0);
    (unsigned short)(v1 >>> 16) = fnstcw((unsigned short)(v1 >>> 16));
    short v7 = (unsigned short)(v1 >>> 16);
    (v1 >>> 16) & 0xFFFF = 1151;
    (unsigned short)(v1 >>> 16) = fldcw((unsigned short)(v1 >>> 16));
    (v1 >>> 16) & 0xFFFF = v7;
    fist();
    (unsigned short)(v1 >>> 16) = fldcw((unsigned short)(v1 >>> 16));
    →printf("  FIST(%f,RC=01):   should=-8 is=%d\n", (double)-7.1, v0);
    (unsigned short)(v1 >>> 16) = fnstcw((unsigned short)(v1 >>> 16));
    short v8 = (unsigned short)(v1 >>> 16);
    (v1 >>> 16) & 0xFFFF = 2175;
    (unsigned short)(v1 >>> 16) = fldcw((unsigned short)(v1 >>> 16));
    (v1 >>> 16) & 0xFFFF = v8;
    fist();
    (unsigned short)(v1 >>> 16) = fldcw((unsigned short)(v1 >>> 16));
    →printf("  FIST(%f,RC=10):   should=-7 is=%d\n", (double)-7.1, v0);
    (unsigned short)(v1 >>> 16) = fnstcw((unsigned short)(v1 >>> 16));
    short v9 = (unsigned short)(v1 >>> 16);
    (v1 >>> 16) & 0xFFFF = 3199;
    (unsigned short)(v1 >>> 16) = fldcw((unsigned short)(v1 >>> 16));
    (v1 >>> 16) & 0xFFFF = v9;
    fist();
    (unsigned short)(v1 >>> 16) = fldcw((unsigned short)(v1 >>> 16));
    →printf("  FIST(%f,RC=11):   should=-7 is=%d\n", (double)-7.1, v0);
    return 0;
}

int FLD() {
    →printf("FLD(float=12.34...):       should=   12.345679/   1.234568e+01 is=%12f/%15e\n", 12.34567928314209, 12.34567928314209);
    →printf("FLD(double=12.34...):      should=   12.345679/   1.234568e+01 is=%12f/%15e\n", 12.345678901234567, 12.345678901234567);
    __SyntheticTypeUnknownF v0 = *(__int128*)&gvar_804D1C3;
    →printf("FLD(long double=12.34...): should=   12.345679/   1.234568e+01 is=%12f/%15e\n", v0, v0);
    return 0;
}

int FLDC() {
    __SyntheticTypeUnknownF v0;
    __SyntheticTypeUnknownF v1;
    fld1();
    →printf((char*)0x804D1D0, v0, v0);
    fldl2e();
    →printf("FLDL2E: should=    1.442695/   1.442695e+00 is=%12f/%15e\n", v1, v1);
    fldl2t();
    →printf("FLDL2T: should=    3.321928/   3.321928e+00 is=%12f/%15e\n", v1, v1);
    fldlg2();
    →printf("FLDLG2: should=    0.301030/   3.010300e-01 is=%12f/%15e\n", v1, v1);
    fldln2();
    →printf("FLDLN2: should=    0.693147/   6.931472e-01 is=%12f/%15e\n", v1, v1);
    fldpi();
    →printf("FLDPI:  should=    3.141593/   3.141593e+00 is=%12f/%15e\n", v1, v1);
    fldz();
    →printf("FLDZ:   should=    0.000000/   0.000000e+00 is=%12f/%15e\n", v1, v1);
    return 0;
}

int FMUL(double param0, int param1) {
    __SyntheticTypeUnknownF v0;
    fldpi();
    __SyntheticTypeUnknownF v1 = v0 * param0;
    →printf("FMUL(para*pi):  should=                             is=%12f/%15e\n", v1, v1);
    fldpi();
    →printf("FMUL(12.34*pi): should=   38.767253/   3.876725e+01 is=%12f/%15e\n", param0 * 12.34, param0 * 12.34);
    fldpi();
    →printf("FIMUL(1000*pi): should= 3141.592654/   3.141593e+03 is=%12f/%15e\n", param0 * 12.34 * (double)1000, param0 * 12.34 * (double)1000);
    return 0;
}

int FPATAN(double param0, int param1) {
    fld1();
    fpatan();
    →printf("FPATAN(y=1 x=para): should=                             is=%12f/%15e\n", param0, param0);
    fld1();
    fldz();
    fpatan();
    →printf("FPATAN(y=1 x=0):    should=    1.570796/   1.570796e+00 is=%12f/%15e\n", param0, param0);
    fld1();
    fld1();
    fpatan();
    →printf("FPATAN(y=1 x=1):    should=    0.785398/   7.853982e-01 is=%12f/%15e\n", param0, param0);
    return 0;
}

int FPREM(double param0, int param1) {
    fprem();
    __SyntheticTypeUnknownF v0 = (double)11;
    →printf("FPREM(11 mod 7):          should=    4.000000/   4.000000e+00 is=%12f/%15e\n", v0, v0);
    __SyntheticTypeUnknownF v1 = (double)11;
    fprem1();
    int v2 = →printf("FPREM1(11 mod 7):         should=   -3.000000/  -3.000000e+00 is=%12f/%15e\n", v1, v1);
    fldpi();
    do {
        fprem();
        wait();
        (unsigned short)v3 = fnstsw((unsigned short)v2);
        wait();
    }
    while((v2 >>> 10) & 0x1);
    →printf("reduced para using FPREM: should=                             is=%12f/%15e\n", param0 + param0, param0 + param0);
    return 0;
}

int FPTAN(double param0, int param1) {
    __int128 v0;
    __SyntheticTypeUnknownF v1;
    __SyntheticTypeUnknownF v2;
    __SyntheticTypeUnknownF v3;
    __SyntheticTypeUnknownF v4;
    fptan();
    →printf("FPTAN(para): should=                             is=%12f/%15e\n", v1, v1);
    fldz();
    fptan();
    →printf("FPTAN(0):    should=    0.000000/   0.000000e+00 is=%12f/%15e\n", v1, v1);
    fldz();
    fptan();
    →printf("FPTAN(0)[1]: should=    1.000000/   1.000000e+00 is=%12f/%15e\n", param0, param0);
    fld1();
    fld1();
    fld1();
    fld1();
    fldpi();
    v5[v6 + 1] = fdivrp(v0, v2 + (v3 + (param0 + param0)));
    fptan();
    →printf("FPTAN(pi/4): should=    1.000000/   1.000000e+00 is=%12f/%15e\n", v4, v4);
    return 0;
}

int FRNDINT(double param0, int param1) {
    int v0;
    int v1;
    int v2;
    int v3;
    →puts("FRNDINT:\n  RC=00: to nearest\n  RC=01: down to -inf\n  RC=10: up to +inf\n  RC=11: to zero\n");
    __SyntheticTypeUnknownF v4 = param0;
    frndint();
    *(long long*)&v0 = v4;
    *(long long*)&v1 = v4;
    →printf("  FRNDINT(para):              should=                             is=%12f/%15e\n", *(double*)&v1, *(double*)&v0);
    *(long long*)&v2 = 12.7;
    (unsigned short)v3 = fnstcw((unsigned short)v3);
    short v5 = (unsigned short)v3;
    v3 & 0xFFFF = 127;
    (unsigned short)v3 = fldcw((unsigned short)v3);
    v3 & 0xFFFF = v5;
    frndint();
    (unsigned short)v3 = fldcw((unsigned short)v3);
    →printf("  FRNDINT(%f,RC=00):   should=   13.000000/   1.300000e+01 is=%12f/%15e\n", *(double*)&v2, 12.7, 12.7);
    *(long long*)&v2 = 12.7;
    (unsigned short)v3 = fnstcw((unsigned short)v3);
    short v6 = (unsigned short)v3;
    v3 & 0xFFFF = 1151;
    (unsigned short)v3 = fldcw((unsigned short)v3);
    v3 & 0xFFFF = v6;
    frndint();
    (unsigned short)v3 = fldcw((unsigned short)v3);
    →printf("  FRNDINT(%f,RC=01):   should=   12.000000/   1.200000e+01 is=%12f/%15e\n", *(double*)&v2, 12.7, 12.7);
    *(long long*)&v2 = 12.7;
    (unsigned short)v3 = fnstcw((unsigned short)v3);
    short v7 = (unsigned short)v3;
    v3 & 0xFFFF = 2175;
    (unsigned short)v3 = fldcw((unsigned short)v3);
    v3 & 0xFFFF = v7;
    frndint();
    (unsigned short)v3 = fldcw((unsigned short)v3);
    →printf("  FRNDINT(%f,RC=10):   should=   13.000000/   1.300000e+01 is=%12f/%15e\n", *(double*)&v2, 12.7, 12.7);
    *(long long*)&v2 = 12.7;
    (unsigned short)v3 = fnstcw((unsigned short)v3);
    short v8 = (unsigned short)v3;
    v3 & 0xFFFF = 3199;
    (unsigned short)v3 = fldcw((unsigned short)v3);
    v3 & 0xFFFF = v8;
    frndint();
    (unsigned short)v3 = fldcw((unsigned short)v3);
    →printf("  FRNDINT(%f,RC=11):   should=   12.000000/   1.200000e+01 is=%12f/%15e\n", *(double*)&v2, 12.7, 12.7);
    *(long long*)&v2 = -7.1;
    (unsigned short)v3 = fnstcw((unsigned short)v3);
    short v9 = (unsigned short)v3;
    v3 & 0xFFFF = 127;
    (unsigned short)v3 = fldcw((unsigned short)v3);
    v3 & 0xFFFF = v9;
    frndint();
    (unsigned short)v3 = fldcw((unsigned short)v3);
    →printf("  FRNDINT(%f,RC=00):   should=   -7.000000/  -7.000000e+00 is=%12f/%15e\n", *(double*)&v2, -7.1, -7.1);
    *(long long*)&v2 = -7.1;
    (unsigned short)v3 = fnstcw((unsigned short)v3);
    short v10 = (unsigned short)v3;
    v3 & 0xFFFF = 1151;
    (unsigned short)v3 = fldcw((unsigned short)v3);
    v3 & 0xFFFF = v10;
    frndint();
    (unsigned short)v3 = fldcw((unsigned short)v3);
    →printf("  FRNDINT(%f,RC=01):   should=   -8.000000/  -8.000000e+00 is=%12f/%15e\n", *(double*)&v2, -7.1, -7.1);
    *(long long*)&v2 = -7.1;
    (unsigned short)v3 = fnstcw((unsigned short)v3);
    short v11 = (unsigned short)v3;
    v3 & 0xFFFF = 2175;
    (unsigned short)v3 = fldcw((unsigned short)v3);
    v3 & 0xFFFF = v11;
    frndint();
    (unsigned short)v3 = fldcw((unsigned short)v3);
    →printf("  FRNDINT(%f,RC=10):   should=   -7.000000/  -7.000000e+00 is=%12f/%15e\n", *(double*)&v2, -7.1, -7.1);
    *(long long*)&v2 = -7.1;
    (unsigned short)v3 = fnstcw((unsigned short)v3);
    short v12 = (unsigned short)v3;
    v3 & 0xFFFF = 3199;
    (unsigned short)v3 = fldcw((unsigned short)v3);
    v3 & 0xFFFF = v12;
    frndint();
    (unsigned short)v3 = fldcw((unsigned short)v3);
    →printf("  FRNDINT(%f,RC=11):   should=   -7.000000/  -7.000000e+00 is=%12f/%15e\n", *(double*)&v2, -7.1, -7.1);
    return 0;
}

int FSCALE(double param0, int param1) {
    fscale();
    →printf("FSCALE(para*2^4):   should=                             is=%12f/%15e\n", param0, param0);
    fldpi();
    fscale();
    →printf("FSCALE(pi*2^para):  should=                             is=%12f/%15e\n", param0, param0);
    __SyntheticTypeUnknownF v0 = (double)4;
    fldpi();
    fscale();
    →printf("FSCALE(pi*2^4):     should=   50.265482/   5.026548e+01 is=%12f/%15e\n", v0, v0);
    __SyntheticTypeUnknownF v1 = (double)4;
    fchs();
    fldpi();
    fscale();
    →printf("FSCALE(pi*2^-4):    should=    0.196350/   1.963495e-01 is=%12f/%15e\n", v1, v1);
    fldpi();
    fscale();
    →printf("FSCALE(pi*2^12.34): should=12867.963509/   1.286796e+04 is=%12f/%15e\n", 12.34, 12.34);
    return 0;
}

int FSIN(double param0, int param1) {
    __SyntheticTypeUnknownF v0;
    __SyntheticTypeUnknownF v1;
    __int128 v2;
    __SyntheticTypeUnknownF v3;
    __SyntheticTypeUnknownF v4;
    fsin();
    →printf("FSIN(para):  should=                              is=%12f/%15e\n", param0, param0);
    fldz();
    fsin();
    →printf("FSIN(0):     should=     0.000000/   0.000000e+00 is=%12f/%15e\n", param0, param0);
    fldpi();
    v5[v6 + 1] = fdivrp(param0, (double)6);
    fsin();
    →printf("FSIN(pi/6):  should=     0.500000/   5.000000e-01 is=%12f/%15e\n", v1, v1);
    fld1();
    fld1();
    fldpi();
    v5[v6 + 1] = fdivrp(v2, v3 + v4);
    fsin();
    →printf("FSIN(pi/2):  should=     1.000000/   1.000000e+00 is=%12f/%15e\n", v0, v0);
    return 0;
}

int FSINCOS(double param0, int param1) {
    __SyntheticTypeUnknownF v0;
    fsincos();
    →printf("FSINCOS(para)[0=cos]:  should=                              is=%12f/%15e\n", param0, param0);
    fsincos();
    →printf("FSINCOS(para)[1=sin]:  should=                              is=%12f/%15e\n", param0, param0);
    fldz();
    fsincos();
    →printf("FSINCOS(0)[0=cos]:     should=     1.000000/   1.000000e+00 is=%12f/%15e\n", param0, param0);
    fldz();
    fsincos();
    →printf("FSINCOS(0)[1=sin]:     should=     0.000000/   0.000000e+00 is=%12f/%15e\n", v0, v0);
    return 0;
}

int FSQRT(double param0, int param1) {
    fsqrt();
    →printf("FSQRT(para):     should=                             is=%12f/%15e\n", param0, param0);
    fldpi();
    fsqrt();
    →printf("FSQRT(pi):       should=    1.772454/   1.772454e+00 is=%12f/%15e\n", param0, param0);
    fsqrt();
    →printf("FSQRT(152.2756): should=   12.340000/   1.234000e+01 is=%12f/%15e\n", 152.2756, 152.2756);
    return 0;
}

int FST() {
    __SyntheticTypeUnknownF v0;
    __SyntheticTypeUnknownF v1;
    fldpi();
    *(int*)&buffer = v0;
    →printf("FST(pi as float)       should=0xdb 0x0f 0x49 0x40                               is=0x%02x 0x%02x 0x%02x 0x%02x\n", (unsigned int)buffer, (unsigned int)gvar_8050029, (unsigned int)gvar_805002A, (unsigned int)gvar_805002B);
    fldpi();
    *(long long*)&buffer = v1;
    →printf("FST(pi as double)      should=0x18 0x2d 0x44 0x54 0xfb 0x21 0x09 0x40           is=0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x\n", (unsigned int)buffer, (unsigned int)gvar_8050029, (unsigned int)gvar_805002A, (unsigned int)gvar_805002B, (unsigned int)gvar_805002C, (unsigned int)gvar_805002D, (unsigned int)gvar_805002E, (unsigned int)gvar_805002F);
    fldpi();
    *(__int128*)&buffer = v1;
    →printf("FST(pi as long double) should=0x35 0xc2 0x68 0x21 0xa2 0xda 0x0f 0xc9 0x00 0x40 is=0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x\n", (unsigned int)buffer, (unsigned int)gvar_8050029, (unsigned int)gvar_805002A, (unsigned int)gvar_805002B, (unsigned int)gvar_805002C, (unsigned int)gvar_805002D, (unsigned int)gvar_805002E, (unsigned int)gvar_805002F, (unsigned int)gvar_8050030, (unsigned int)gvar_8050031);
    return 0;
}

int FSUB(double param0, int param1) {
    __int128 v0;
    __SyntheticTypeUnknownF v1;
    __int128 v2;
    __SyntheticTypeUnknownF v3;
    __SyntheticTypeUnknownF v4;
    __int128 v5;
    fld1();
    v6[v7 + 1] = fsubrp(v0, param0);
    →printf("FSUB(1-para):     should=                             is=%12f/%15e\n", v3, v3);
    v6[v7 + 1] = fsubrp(12.34, param0);
    →printf("FSUB(para-12.34): should=                             is=%12f/%15e\n", v4, v4);
    fldpi();
    fld1();
    v6[v7 + 1] = fsubrp(v5, v2);
    →printf("FSUB(1-pi):       should=   -2.141593/  -2.141593e+00 is=%12f/%15e\n", v1, v1);
    fldpi();
    →printf("FISUB(pi-1000):   should= -996.858407/  -9.968584e+02 is=%12f/%15e\n", v1 - (double)1000, v1 - (double)1000);
    return 0;
}

int FTST(double param0, int param1) {
    short v0;
    short v1;
    short v2;
    short v3;
    short v4;
    short v5;
    __int128 v6;
    ftst();
    wait();
    v5 = fnstsw(v5);
    int v7 = →printf("FTST(para): should=0x0100 is=0x%04x\n", (unsigned int)(v0 & 0x4500));
    fldpi();
    ftst();
    wait();
    short v13 = fnstsw((unsigned short)v7);
    int v8 = →printf("FTST(pi):   should=0x0000 is=0x%04x\n", (unsigned int)(v1 & 0x4500));
    fldpi();
    fchs();
    ftst();
    wait();
    short v14 = fnstsw((unsigned short)v8);
    int v9 = →printf("FTST(-pi):  should=0x0100 is=0x%04x\n", (unsigned int)(v2 & 0x4500));
    fldz();
    ftst();
    wait();
    short v15 = fnstsw((unsigned short)v9);
    int v10 = →printf("FTST(0.0):  should=0x4000 is=0x%04x\n", (unsigned int)(v3 & 0x4500));
    fldz();
    fldz();
    v11[v12 + 1] = fdivrp(v6, param0);
    ftst();
    wait();
    short v16 = fnstsw((unsigned short)v10);
    →printf("FTST(nan):  should=0x4500 is=0x%04x\n", (unsigned int)(v4 & 0x4500));
    return 0;
}

int FXAM(double param0, int param1) {
    short v0;
    short v1;
    short v2;
    short v3;
    short v4;
    short v5;
    short v6;
    __int128 v7;
    __int128 v8;
    __int128 v9;
    fxam();
    wait();
    v6 = fnstsw(v6);
    int v10 = →printf("FXAM(para):  should=0x0400 is=0x%04x\n", (unsigned int)(v0 & 0x4500));
    fldpi();
    fxam();
    wait();
    short v17 = fnstsw((unsigned short)v10);
    int v11 = →printf("FXAM(pi):    should=0x0400 is=0x%04x\n", (unsigned int)(v1 & 0x4500));
    fldz();
    fxam();
    wait();
    short v18 = fnstsw((unsigned short)v11);
    int v12 = →printf("FXAM(0.0):   should=0x4000 is=0x%04x\n", (unsigned int)(v2 & 0x4500));
    fldz();
    fldz();
    v15[v16 + 1] = fdivrp(v8, param0);
    fxam();
    wait();
    short v19 = fnstsw((unsigned short)v12);
    int v13 = →printf("FXAM(nan):   should=0x0100 is=0x%04x\n", (unsigned int)(v3 & 0x4500));
    fldz();
    fld1();
    v15[v16 + 1] = fdivrp(v9, v7);
    fxam();
    wait();
    short v20 = fnstsw((unsigned short)v13);
    int v14 = →printf("FXAM(inf):   should=0x0500 is=0x%04x\n", (unsigned int)(v4 & 0x4500));
    fxam();
    wait();
    short v21 = fnstsw((unsigned short)v14);
    →printf("FXAM(empty): should=0x4100 is=0x%04x\n", (unsigned int)(v5 & 0x4500));
    return 0;
}

int FXCH(double param0, int param1) {
    fldpi();
    fldz();
    →printf("FXCH(para):  should=                             is=%12f/%15e\n", param0, param0);
    fldpi();
    fld1();
    →printf("FXCH(pi):    should=    3.141593/   3.141593e+00 is=%12f/%15e\n", param0, param0);
    return 0;
}

int FXTRACT(double param0, int param1) {
    fxtract();
    →printf("FXTRACT(para)[0=signi]:  should=                             is=%12f/%15e\n", param0, param0);
    fxtract();
    →printf("FXTRACT(para)[1=exp]:    should=                             is=%12f/%15e\n", param0, param0);
    fxtract();
    →printf("FXTRACT(12.34)[0=signi]: should=    1.542500/   1.542500e+00 is=%12f/%15e\n", 12.34, 12.34);
    fxtract();
    →printf("FXTRACT(12.34)[1=exp]:   should=    3.000000/   3.000000e+00 is=%12f/%15e\n", param0, param0);
    return 0;
}

int FYL2X(double param0, int param1) {
    fld1();
    fyl2x();
    →printf("FYL2X(para, base=2):  should=                             is=%12f/%15e\n", param0, param0);
    fld1();
    __SyntheticTypeUnknownF v0 = (double)1000;
    fyl2x();
    →printf("FYL2X(1000, base=2):  should=    9.965784/   9.965784e+00 is=%12f/%15e\n", v0, v0);
    fldln2();
    __SyntheticTypeUnknownF v1 = (double)1000;
    fyl2x();
    →printf("FYL2X(1000, base=e):  should=    6.907755/   6.907755e+00 is=%12f/%15e\n", v1, v1);
    fldlg2();
    __SyntheticTypeUnknownF v2 = (double)1000;
    fyl2x();
    →printf("FYL2X(1000, base=10): should=    3.000000/   3.000000e+00 is=%12f/%15e\n", v2, v2);
    return 0;
}

int FYL2XP1(double param0, int param1) {
    fld1();
    fyl2xp1();
    →printf("FYL2XP1(para, base=2): should=                             is=%12f/%15e\n", param0, param0);
    fld1();
    __SyntheticTypeUnknownF v0 = (double)999;
    fyl2xp1();
    →printf("FYL2XP1(999, base=2):  should=    9.965784/   9.965784e+00 is=%12f/%15e\n", v0, v0);
    fldln2();
    __SyntheticTypeUnknownF v1 = (double)999;
    fyl2xp1();
    →printf("FYL2XP1(999, base=e):  should=    6.907755/   6.907755e+00 is=%12f/%15e\n", v1, v1);
    fldlg2();
    __SyntheticTypeUnknownF v2 = (double)999;
    fyl2xp1();
    →printf("FYL2XP1(999, base=10): should=    3.000000/   3.000000e+00 is=%12f/%15e\n", v2, v2);
    return 0;
}

int NOT_EXECUTED() {
    __int128 v0;
    __int128 v1;
    →puts("before FNOP");
    v2[v3] = fnop(v0, v0);
    →puts("before FNCLEX");
    fnclex();
    →puts("before FDECSTP");
    fdecstp();
    →puts("before FFREE(st(4))");
    v2[v3 + 4] = ffree(v1);
    →puts("before FINCSTP");
    fincstp();
    →puts("before FNINIT");
    fninit();
    →puts("before FNSAVE");
    *(unsigned char*)&buffer = fnsave(*(unsigned char*)&buffer);
    →puts("before FNSTCW");
    *(short*)&buffer = fnstcw(*(short*)&buffer);
    →puts("before FNSTENV");
    *(__int128*)&buffer = fnstenv(*(__int128*)&buffer);
    →puts("before FNSTSW");
    *(short*)&buffer = fnstsw(*(short*)&buffer);
    →puts("before FRSTOR");
    *(unsigned char*)&buffer = frstor(*(unsigned char*)&buffer);
    →puts("before FWAIT");
    wait();
    →puts("before FXRSTOR");
    fxrstor();
    →puts("before FXSAVE");
    fxsave();
    return 0;
}

int TOP() {
    short v0;
    short v1;
    wait();
    v1 = fnstsw(v1);
    return ((unsigned int)v0 >>> 11) & 0x7;
}

void main() {
    // Decompilation error
}

void sub_8049030() {
    jump gvar_8050008;
}

void sub_80490C7() {
}

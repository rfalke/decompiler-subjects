
/* __x86.get_pc_thunk.bx */
void __x86_get_pc_thunk_bx() {
    return;
}

void fun_80490c7(int32_t a1, void** a2, int32_t a3) {
    return;
}

int32_t __libc_start_main = 0x8049066;

void fun_8049060(int32_t a1, int16_t a2, void* a3, int32_t a4, int32_t a5, int32_t a6, void** a7, int32_t a8) {
    goto __libc_start_main;
}

int32_t __assert_fail(int32_t a1, int32_t a2);

int32_t deregister_tm_clones() {
    int32_t eax1;
    int32_t v2;
    int32_t eax3;

    eax1 = 0x8050024;
    if (1 || (eax1 = 0, 1)) {
        return eax1;
    } else {
        eax3 = __assert_fail(0x8050024, v2);
        return eax3;
    }
}

int32_t printf = 0x8049046;

void fun_8049040(int32_t a1, uint32_t a2, uint32_t a3, uint32_t a4, uint32_t a5, ...) {
    goto printf;
}

int32_t __assert_fail = 0x8049086;

void fun_8049080(int32_t a1, uint32_t a2, uint32_t a3, uint32_t a4) {
    goto __assert_fail;
}

void fun_8049050(int32_t a1, int32_t a2);

int16_t buffer = 0;

void NOT_EXECUTED() {
    int16_t fpu_status_word1;

    fun_8049050("before FNOP", __return_address());
    __asm__("fnop ");
    fun_8049050("before FNCLEX", __return_address());
    __asm__("fclex ");
    fun_8049050("before FDECSTP", __return_address());
    __asm__("fdecstp ");
    fun_8049050("before FFREE(st(4))", __return_address());
    __asm__("ffree st4");
    fun_8049050("before FINCSTP", __return_address());
    __asm__("fncstp ");
    fun_8049050("before FNINIT", __return_address());
    __asm__("fninit ");
    fun_8049050("before FNSAVE", __return_address());
    __asm__("fnsave [0x8050028]");
    fun_8049050("before FNSTCW", __return_address());
    __asm__("fnstcw word [0x8050028]");
    fun_8049050("before FNSTENV", __return_address());
    __asm__("fnstenv [0x8050028]");
    fun_8049050("before FNSTSW", __return_address());
    buffer = fpu_status_word1;
    fun_8049050("before FRSTOR", __return_address());
    __asm__("frstor [0x8050028]");
    fun_8049050("before FWAIT", __return_address());
    __asm__("wait ");
    fun_8049050("before FXRSTOR", __return_address());
}

int32_t puts = 0x8049056;

void fun_8049050(int32_t a1, int32_t a2) {
    goto puts;
}

int32_t F2XM1() {
    uint32_t v1;
    uint32_t v2;
    uint32_t v3;
    uint32_t v4;
    uint32_t v5;
    uint32_t v6;
    uint32_t v7;
    uint32_t v8;
    uint32_t v9;
    uint32_t v10;
    uint32_t v11;
    uint32_t v12;
    uint32_t v13;
    uint32_t v14;
    uint32_t v15;
    uint32_t v16;

    __asm__("fld1 ");
    __asm__("fchs ");
    __asm__("f2xm1 ");
    __asm__("fst qword [esp+0x8]");
    __asm__("fstp qword [esp]");
    fun_8049040("F2XM1(-1):   should=   -0.500000/  -5.000000e-01 is=%12f/%15e\n", v1, v2, v3, v4);
    __asm__("fldz ");
    __asm__("f2xm1 ");
    __asm__("fst qword [esp+0x8]");
    __asm__("fstp qword [esp]");
    fun_8049040("F2XM1(0):    should=    0.000000/   0.000000e+00 is=%12f/%15e\n", v5, v6, v7, v8);
    __asm__("fld1 ");
    __asm__("f2xm1 ");
    __asm__("fst qword [esp+0x8]");
    __asm__("fstp qword [esp]");
    fun_8049040("F2XM1(+1):   should=    1.000000/   1.000000e+00 is=%12f/%15e\n", v9, v10, v11, v12);
    __asm__("fldlpi ");
    __asm__("fld1 ");
    __asm__("fdivrp st1, st0");
    __asm__("f2xm1 ");
    __asm__("fst qword [esp+0x8]");
    __asm__("fstp qword [esp]");
    fun_8049040("F2XM1(1/pi): should=    0.246869/   2.468690e-01 is=%12f/%15e\n", v13, v14, v15, v16);
    return 0;
}

uint32_t TOP() {
    uint16_t fpu_status_word1;

    __asm__("wait ");
    return static_cast<uint32_t>(fpu_status_word1) >> 11 & 7;
}

int32_t putchar = 0x8049076;

void fun_8049070(int32_t a1, uint32_t a2, uint32_t a3, uint32_t a4) {
    goto putchar;
}

int32_t FABS(int32_t a1, uint32_t a2, uint32_t a3, uint32_t a4) {
    uint32_t v5;
    uint32_t v6;
    uint32_t v7;
    uint32_t v8;
    uint32_t v9;
    uint32_t v10;
    uint32_t v11;
    uint32_t v12;
    uint32_t v13;
    uint32_t v14;
    uint32_t v15;
    uint32_t v16;
    uint32_t v17;
    uint32_t v18;
    uint32_t v19;
    uint32_t v20;

    __asm__("fld qword [esp+0x2c]");
    __asm__("fabs ");
    __asm__("fst qword [esp+0x8]");
    __asm__("fstp qword [esp]");
    fun_8049040("FABS(para):   should=                            is=%12f/%15e\n", v5, v6, v7, v8);
    __asm__("fld1 ");
    __asm__("fchs ");
    __asm__("fabs ");
    __asm__("fst qword [esp+0x8]");
    __asm__("fstp qword [esp]");
    fun_8049040("FABS(-1):   should=     1.000000/   1.000000e+00 is=%12f/%15e\n", v9, v10, v11, v12);
    __asm__("fldz ");
    __asm__("fchs ");
    __asm__("fabs ");
    __asm__("fst qword [esp+0x8]");
    __asm__("fstp qword [esp]");
    fun_8049040("FABS(-0):    should=    0.000000/   0.000000e+00 is=%12f/%15e\n", v13, v14, v15, v16);
    __asm__("fld1 ");
    __asm__("fabs ");
    __asm__("fst qword [esp+0x8]");
    __asm__("fstp qword [esp]");
    fun_8049040("FABS(+1):   should=     1.000000/   1.000000e+00 is=%12f/%15e\n", v17, v18, v19, v20);
    return 0;
}

int32_t FADD(int32_t a1, uint32_t a2, uint32_t a3, uint32_t a4) {
    uint32_t v5;
    uint32_t v6;
    uint32_t v7;
    uint32_t v8;
    uint32_t v9;
    uint32_t v10;
    uint32_t v11;
    uint32_t v12;
    uint32_t v13;
    uint32_t v14;
    uint32_t v15;
    uint32_t v16;
    uint32_t v17;
    uint32_t v18;
    uint32_t v19;
    uint32_t v20;
    uint32_t v21;
    uint32_t v22;
    uint32_t v23;
    uint32_t v24;

    __asm__("fld qword [esp+0x2c]");
    __asm__("fld1 ");
    __asm__("faddp st1, st0");
    __asm__("fst qword [esp+0x8]");
    __asm__("fstp qword [esp]");
    fun_8049040("FADD(para+1):     should=                             is=%12f/%15e\n", v5, v6, v7, v8);
    __asm__("fld qword [esp+0x2c]");
    __asm__("fadd qword [0x804c3cc]");
    __asm__("fst qword [esp+0x8]");
    __asm__("fstp qword [esp]");
    fun_8049040("FADD(para+12.34): should=                             is=%12f/%15e\n", v9, v10, v11, v12);
    __asm__("fld1 ");
    __asm__("fldlpi ");
    __asm__("fdivp st1, st0");
    __asm__("fldlpi ");
    __asm__("faddp st1, st0");
    __asm__("fst qword [esp+0x8]");
    __asm__("fstp qword [esp]");
    fun_8049040("FADD(pi+1/pi):    should=    3.459903/   3.459903e+00 is=%12f/%15e\n", v13, v14, v15, v16);
    __asm__("fldz ");
    __asm__("fchs ");
    __asm__("fld1 ");
    __asm__("fld1 ");
    __asm__("faddp st1, st0");
    __asm__("faddp st1, st0");
    __asm__("fst qword [esp+0x8]");
    __asm__("fstp qword [esp]");
    fun_8049040("FADD(1+1+-0):     should=    2.000000/   2.000000e+00 is=%12f/%15e\n", v17, v18, v19, v20);
    __asm__("fldlpi ");
    __asm__("fiadd word [0x804c3d4]");
    __asm__("fst qword [esp+0x8]");
    __asm__("fstp qword [esp]");
    fun_8049040("FADD(pi+1000):    should= 1003.141593/   1.003142e+03 is=%12f/%15e\n", v21, v22, v23, v24);
    return 0;
}

int32_t FBSTP() {
    uint32_t eax1;
    uint32_t eax2;
    uint32_t v3;
    uint32_t v4;
    int32_t v5;
    int32_t v6;

    __asm__("fld qword [0x804c468]");
    __asm__("fchs ");
    __asm__("fbstp tword [0x8050028]");
    eax1 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&buffer) + 1);
    eax2 = *reinterpret_cast<unsigned char*>(&buffer);
    __asm__("fld qword [0x804c468]");
    __asm__("fchs ");
    __asm__("fstp qword [esp]");
    fun_8049040("FBSTP(%f) should=0x44 0x33 0x22 0x11 0x90 0x78 0x56 0x34 0x12 0x80 is=0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x\n", v3, v4, eax2, eax1, "FBSTP(%f) should=0x44 0x33 0x22 0x11 0x90 0x78 0x56 0x34 0x12 0x80 is=0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x\n", v5, v6, eax2, eax1);
    return 0;
}

unsigned char g804c500 = 0x88;

unsigned char g804c4ff = 0x77;

unsigned char g804c4fe = 0x66;

unsigned char readbuffer = 85;

int32_t FBLD() {
    uint32_t eax1;
    uint32_t eax2;
    uint32_t eax3;
    uint32_t eax4;

    __asm__("fbld tword [0x804c4fd]");
    __asm__("fst qword [esp+0x8]");
    __asm__("fstp qword [esp]");
    eax1 = g804c500;
    eax2 = g804c4ff;
    eax3 = g804c4fe;
    eax4 = readbuffer;
    fun_8049040("FBLD(0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x): should=-123456789088776656.000000/  -1.234568e+17 is=%12f/%15e\n", eax4, eax3, eax2, eax1, "FBLD(0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x): should=-123456789088776656.000000/  -1.234568e+17 is=%12f/%15e\n", eax4, eax3, eax2, eax1);
    return 0;
}

int32_t FCHS(int32_t a1, uint32_t a2, uint32_t a3, uint32_t a4) {
    uint32_t v5;
    uint32_t v6;
    uint32_t v7;
    uint32_t v8;
    uint32_t v9;
    uint32_t v10;
    uint32_t v11;
    uint32_t v12;
    uint32_t v13;
    uint32_t v14;
    uint32_t v15;
    uint32_t v16;

    __asm__("fld qword [esp+0x2c]");
    __asm__("fchs ");
    __asm__("fst qword [esp+0x8]");
    __asm__("fstp qword [esp]");
    fun_8049040("FCHS(para):  should=                             is=%12f/%15e\n", v5, v6, v7, v8);
    __asm__("fldlpi ");
    __asm__("fchs ");
    __asm__("fst qword [esp+0x8]");
    __asm__("fstp qword [esp]");
    fun_8049040("FCHS(pi):    should=   -3.141593/  -3.141593e+00 is=%12f/%15e\n", v9, v10, v11, v12);
    __asm__("fldlpi ");
    __asm__("fldz ");
    __asm__("fsubrp st1, st0");
    __asm__("fchs ");
    __asm__("fst qword [esp+0x8]");
    __asm__("fstp qword [esp]");
    fun_8049040("FCHS(0-pi):  should=    3.141593/   3.141593e+00 is=%12f/%15e\n", v13, v14, v15, v16);
    return 0;
}

int32_t FCMOV(int32_t a1, uint32_t a2, uint32_t a3, uint32_t a4) {
    int32_t eax5;
    uint32_t v6;
    uint32_t v7;
    uint32_t v8;
    uint32_t v9;
    uint32_t v10;
    uint32_t v11;
    uint32_t v12;
    uint32_t v13;
    uint32_t v14;
    uint32_t v15;
    uint32_t v16;
    uint32_t v17;
    uint32_t v18;
    uint32_t v19;
    uint32_t v20;
    uint32_t v21;
    uint32_t v22;
    uint32_t v23;
    uint32_t v24;
    uint32_t v25;
    uint32_t v26;
    uint32_t v27;
    uint32_t v28;
    uint32_t v29;
    uint32_t v30;
    uint32_t v31;
    uint32_t v32;
    uint32_t v33;
    uint32_t v34;
    uint32_t v35;
    uint32_t v36;
    uint32_t v37;
    uint32_t v38;
    uint32_t v39;
    uint32_t v40;

    eax5 = a1;
    fun_8049040("using EFLAGS=0x%0x\n", static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax5) + 1)), v6, v7, v8);
    __asm__("fld1 ");
    __asm__("fldlpi ");
    __asm__("fcmovb st0, st1");
    __asm__("fst qword [esp+0x8]");
    __asm__("fstp qword [esp]");
    __asm__("fstp st0");
    fun_8049040("  FCMOV(below ? 1 : pi):           should=                             is=%12f/%15e\n", v9, v10, v11, v12);
    __asm__("fld1 ");
    __asm__("fldlpi ");
    __asm__("fcmove st0, st1");
    __asm__("fst qword [esp+0x8]");
    __asm__("fstp qword [esp]");
    __asm__("fstp st0");
    fun_8049040("  FCMOV(equal ? 1 : pi):           should=                             is=%12f/%15e\n", v13, v14, v15, v16);
    __asm__("fld1 ");
    __asm__("fldlpi ");
    __asm__("fcmovbe st0, st1");
    __asm__("fst qword [esp+0x8]");
    __asm__("fstp qword [esp]");
    __asm__("fstp st0");
    fun_8049040("  FCMOV(below_or_equal ? 1 : pi):  should=                             is=%12f/%15e\n", v17, v18, v19, v20);
    __asm__("fld1 ");
    __asm__("fldlpi ");
    __asm__("fcmovu st0, st1");
    __asm__("fst qword [esp+0x8]");
    __asm__("fstp qword [esp]");
    __asm__("fstp st0");
    fun_8049040("  FCMOV(unordered ? 1 : pi):       should=                             is=%12f/%15e\n", v21, v22, v23, v24);
    __asm__("fld1 ");
    __asm__("fldlpi ");
    __asm__("fcmovnb st0, st1");
    __asm__("fst qword [esp+0x8]");
    __asm__("fstp qword [esp]");
    __asm__("fstp st0");
    fun_8049040("  FCMOV(!below ? 1 : pi):          should=                             is=%12f/%15e\n", v25, v26, v27, v28);
    __asm__("fld1 ");
    __asm__("fldlpi ");
    __asm__("fcmovne st0, st1");
    __asm__("fst qword [esp+0x8]");
    __asm__("fstp qword [esp]");
    __asm__("fstp st0");
    fun_8049040("  FCMOV(!equal ? 1 : pi):          should=                             is=%12f/%15e\n", v29, v30, v31, v32);
    __asm__("fld1 ");
    __asm__("fldlpi ");
    __asm__("fcmovnbe st0, st1");
    __asm__("fst qword [esp+0x8]");
    __asm__("fstp qword [esp]");
    __asm__("fstp st0");
    fun_8049040("  FCMOV(!below_or_equal ? 1 : pi): should=                             is=%12f/%15e\n", v33, v34, v35, v36);
    __asm__("fld1 ");
    __asm__("fldlpi ");
    __asm__("fcmovnu st0, st1");
    __asm__("fst qword [esp+0x8]");
    __asm__("fstp qword [esp]");
    __asm__("fstp st0");
    fun_8049040("  FCMOV(!unordered ? 1 : pi):      should=                             is=%12f/%15e\n", v37, v38, v39, v40);
    return 0;
}

int32_t FCOM(int32_t a1, uint32_t a2, uint32_t a3, uint32_t a4) {
    uint16_t fpu_status_word5;
    uint32_t v6;
    uint32_t v7;
    uint32_t v8;
    uint16_t fpu_status_word9;
    uint32_t v10;
    uint32_t v11;
    uint32_t v12;
    uint16_t fpu_status_word13;
    uint32_t v14;
    uint32_t v15;
    uint32_t v16;
    uint16_t fpu_status_word17;
    uint32_t v18;
    uint32_t v19;
    uint32_t v20;
    uint16_t fpu_status_word21;
    uint32_t v22;
    uint32_t v23;
    uint32_t v24;
    uint16_t fpu_status_word25;
    uint32_t v26;
    uint32_t v27;
    uint32_t v28;
    uint16_t fpu_status_word29;
    uint32_t v30;
    uint32_t v31;
    uint32_t v32;
    uint16_t fpu_status_word33;
    uint32_t v34;
    uint32_t v35;
    uint32_t v36;

    __asm__("fld1 ");
    __asm__("fcomp dword [esp+0x2c]");
    __asm__("wait ");
    fun_8049040("FCOM(1,para): should=0x0000 is=0x%04x\n", static_cast<uint32_t>(reinterpret_cast<uint16_t>(fpu_status_word5 & 0x4500)), v6, v7, v8);
    __asm__("fld1 ");
    __asm__("fld qword [esp+0x2c]");
    __asm__("fcompp ");
    __asm__("wait ");
    fun_8049040("FCOM(para,1): should=0x0100 is=0x%04x\n", static_cast<uint32_t>(reinterpret_cast<uint16_t>(fpu_status_word9 & 0x4500)), v10, v11, v12);
    __asm__("fld1 ");
    __asm__("fldlpi ");
    __asm__("fcompp ");
    __asm__("wait ");
    fun_8049040("FCOM(pi,1):   should=0x0000 is=0x%04x\n", static_cast<uint32_t>(reinterpret_cast<uint16_t>(fpu_status_word13 & 0x4500)), v14, v15, v16);
    __asm__("fldlpi ");
    __asm__("fld1 ");
    __asm__("fcompp ");
    __asm__("wait ");
    fun_8049040("FCOM(1,pi):   should=0x0100 is=0x%04x\n", static_cast<uint32_t>(reinterpret_cast<uint16_t>(fpu_status_word17 & 0x4500)), v18, v19, v20);
    __asm__("fld1 ");
    __asm__("fld1 ");
    __asm__("fcompp ");
    __asm__("wait ");
    fun_8049040("FCOM(1,1):    should=0x4000 is=0x%04x\n", static_cast<uint32_t>(reinterpret_cast<uint16_t>(fpu_status_word21 & 0x4500)), v22, v23, v24);
    __asm__("fldz ");
    __asm__("fldz ");
    __asm__("fdivrp st1, st0");
    __asm__("fld1 ");
    __asm__("fcompp ");
    __asm__("wait ");
    fun_8049040("FCOM(1,nan):  should=0x4500 is=0x%04x\n", static_cast<uint32_t>(reinterpret_cast<uint16_t>(fpu_status_word25 & 0x4500)), v26, v27, v28);
    __asm__("fldlpi ");
    __asm__("ficomp word [0x804c9bc]");
    __asm__("wait ");
    fun_8049040("FICOM(pi,3):  should=0x0000 is=0x%04x\n", static_cast<uint32_t>(reinterpret_cast<uint16_t>(fpu_status_word29 & 0x4500)), v30, v31, v32);
    __asm__("fldlpi ");
    __asm__("ficomp word [0x804db42]");
    __asm__("wait ");
    fun_8049040("FICOM(pi,4):  should=0x0100 is=0x%04x\n", static_cast<uint32_t>(reinterpret_cast<uint16_t>(fpu_status_word33 & 0x4500)), v34, v35, v36);
    return 0;
}

int32_t FCOMI(int32_t a1, uint32_t a2, uint32_t a3, uint32_t a4) {
    uint32_t eax5;
    unsigned char ah6;
    uint32_t v7;
    uint32_t v8;
    uint32_t v9;
    uint32_t eax10;
    uint32_t v11;
    uint32_t v12;
    uint32_t v13;
    uint32_t eax14;
    uint32_t v15;
    uint32_t v16;
    uint32_t v17;
    uint32_t eax18;
    uint32_t v19;
    uint32_t v20;
    uint32_t v21;
    uint32_t eax22;
    uint32_t v23;
    uint32_t v24;
    uint32_t v25;
    uint32_t v26;
    uint32_t v27;
    uint32_t v28;

    __asm__("fld qword [esp+0x2c]");
    __asm__("fld1 ");
    __asm__("fcomip st0, st1");
    __asm__("fstp st0");
    __asm__("lahf ");
    eax5 = ah6 & 69;
    fun_8049040("FCOMI(1,para): should=0x00 is=0x%02x\n", eax5, v7, v8, v9);
    __asm__("fld1 ");
    __asm__("fld qword [esp+0x2c]");
    __asm__("fcomip st0, st1");
    __asm__("fstp st0");
    __asm__("lahf ");
    eax10 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax5) + 1) & 69;
    fun_8049040("FCOMI(para,1): should=0x01 is=0x%02x\n", eax10, v11, v12, v13);
    __asm__("fld1 ");
    __asm__("fldlpi ");
    __asm__("fcomip st0, st1");
    __asm__("fstp st0");
    __asm__("lahf ");
    eax14 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax10) + 1) & 69;
    fun_8049040("FCOMI(pi,1):   should=0x00 is=0x%02x\n", eax14, v15, v16, v17);
    __asm__("fldlpi ");
    __asm__("fld1 ");
    __asm__("fcomip st0, st1");
    __asm__("fstp st0");
    __asm__("lahf ");
    eax18 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax14) + 1) & 69;
    fun_8049040("FCOMI(1,pi):   should=0x01 is=0x%02x\n", eax18, v19, v20, v21);
    __asm__("fld1 ");
    __asm__("fld1 ");
    __asm__("fcomip st0, st1");
    __asm__("fstp st0");
    __asm__("lahf ");
    eax22 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax18) + 1) & 69;
    fun_8049040("FCOMI(1,1):    should=0x40 is=0x%02x\n", eax22, v23, v24, v25);
    __asm__("fldz ");
    __asm__("fldz ");
    __asm__("fdivrp st1, st0");
    __asm__("fld1 ");
    __asm__("fcomip st0, st1");
    __asm__("fstp st0");
    __asm__("lahf ");
    fun_8049040("FCOMI(1,nan):  should=0x45 is=0x%02x\n", static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax22) + 1) & 69)), v26, v27, v28);
    return 0;
}

int32_t FCOS(int32_t a1, uint32_t a2, uint32_t a3, uint32_t a4) {
    uint32_t v5;
    uint32_t v6;
    uint32_t v7;
    uint32_t v8;
    uint32_t v9;
    uint32_t v10;
    uint32_t v11;
    uint32_t v12;
    uint32_t v13;
    uint32_t v14;
    uint32_t v15;
    uint32_t v16;
    uint32_t v17;
    uint32_t v18;
    uint32_t v19;
    uint32_t v20;

    __asm__("fld qword [esp+0x2c]");
    __asm__("fcos ");
    __asm__("fst qword [esp+0x8]");
    __asm__("fstp qword [esp]");
    fun_8049040("FCOS(para):  should=                              is=%12f/%15e\n", v5, v6, v7, v8);
    __asm__("fldz ");
    __asm__("fcos ");
    __asm__("fst qword [esp+0x8]");
    __asm__("fstp qword [esp]");
    fun_8049040("FCOS(0):     should=     1.000000/   1.000000e+00 is=%12f/%15e\n", v9, v10, v11, v12);
    __asm__("fld1 ");
    __asm__("fld1 ");
    __asm__("fld1 ");
    __asm__("faddp st1, st0");
    __asm__("faddp st1, st0");
    __asm__("fldlpi ");
    __asm__("fdivrp st1, st0");
    __asm__("fcos ");
    __asm__("fst qword [esp+0x8]");
    __asm__("fstp qword [esp]");
    fun_8049040("FCOS(pi/3):  should=     0.500000/   5.000000e-01 is=%12f/%15e\n", v13, v14, v15, v16);
    __asm__("fldlpi ");
    __asm__("fcos ");
    __asm__("fst qword [esp+0x8]");
    __asm__("fstp qword [esp]");
    fun_8049040("FCOS(pi):    should=    -1.000000/  -1.000000e+00 is=%12f/%15e\n", v17, v18, v19, v20);
    return 0;
}

int32_t FDIV(int32_t a1, uint32_t a2, uint32_t a3, uint32_t a4) {
    uint32_t v5;
    uint32_t v6;
    uint32_t v7;
    uint32_t v8;
    uint32_t v9;
    uint32_t v10;
    uint32_t v11;
    uint32_t v12;
    uint32_t v13;
    uint32_t v14;
    uint32_t v15;
    uint32_t v16;
    uint32_t v17;
    uint32_t v18;
    uint32_t v19;
    uint32_t v20;

    __asm__("fld qword [esp+0x2c]");
    __asm__("fld1 ");
    __asm__("fdivrp st1, st0");
    __asm__("fst qword [esp+0x8]");
    __asm__("fstp qword [esp]");
    fun_8049040("FDIV(1/para):     should=                             is=%12f/%15e\n", v5, v6, v7, v8);
    __asm__("fld qword [0x804c3cc]");
    __asm__("fld qword [esp+0x2c]");
    __asm__("fdivrp st1, st0");
    __asm__("fst qword [esp+0x8]");
    __asm__("fstp qword [esp]");
    fun_8049040("FDIV(para/12.34): should=                             is=%12f/%15e\n", v9, v10, v11, v12);
    __asm__("fldlpi ");
    __asm__("fld1 ");
    __asm__("fdivrp st1, st0");
    __asm__("fst qword [esp+0x8]");
    __asm__("fstp qword [esp]");
    fun_8049040("FDIV(1/pi):       should=    0.318310/   3.183099e-01 is=%12f/%15e\n", v13, v14, v15, v16);
    __asm__("fldlpi ");
    __asm__("fidiv word [0x804c3d4]");
    __asm__("fst qword [esp+0x8]");
    __asm__("fstp qword [esp]");
    fun_8049040("FIDIV(pi/1000):   should=    0.003142/   3.141593e-03 is=%12f/%15e\n", v17, v18, v19, v20);
    return 0;
}

int32_t FDIVR(int32_t a1, uint32_t a2, uint32_t a3, uint32_t a4) {
    uint32_t v5;
    uint32_t v6;
    uint32_t v7;
    uint32_t v8;
    uint32_t v9;
    uint32_t v10;
    uint32_t v11;
    uint32_t v12;
    uint32_t v13;
    uint32_t v14;
    uint32_t v15;
    uint32_t v16;
    uint32_t v17;
    uint32_t v18;
    uint32_t v19;
    uint32_t v20;

    __asm__("fld1 ");
    __asm__("fld qword [esp+0x2c]");
    __asm__("fdivp st1, st0");
    __asm__("fst qword [esp+0x8]");
    __asm__("fstp qword [esp]");
    fun_8049040("FDIVR(1/para):     should=                             is=%12f/%15e\n", v5, v6, v7, v8);
    __asm__("fld qword [esp+0x2c]");
    __asm__("fld qword [0x804c3cc]");
    __asm__("fdivp st1, st0");
    __asm__("fst qword [esp+0x8]");
    __asm__("fstp qword [esp]");
    fun_8049040("FDIVR(para/12.34): should=                             is=%12f/%15e\n", v9, v10, v11, v12);
    __asm__("fld1 ");
    __asm__("fldlpi ");
    __asm__("fdivp st1, st0");
    __asm__("fst qword [esp+0x8]");
    __asm__("fstp qword [esp]");
    fun_8049040("FDIVR(1/pi):       should=    0.318310/   3.183099e-01 is=%12f/%15e\n", v13, v14, v15, v16);
    __asm__("fldlpi ");
    __asm__("fidivr word [0x804c3d4]");
    __asm__("fst qword [esp+0x8]");
    __asm__("fstp qword [esp]");
    fun_8049040("FIDIVR(1000/pi):   should=  318.309886/   3.183099e+02 is=%12f/%15e\n", v17, v18, v19, v20);
    return 0;
}

int32_t FILD() {
    uint32_t v1;
    uint32_t v2;
    uint32_t v3;
    uint32_t v4;
    uint32_t v5;
    uint32_t v6;
    uint32_t v7;
    uint32_t v8;
    uint32_t v9;
    uint32_t v10;
    uint32_t v11;
    uint32_t v12;

    __asm__("fild word [0x804cea9]");
    __asm__("fst qword [esp+0x8]");
    __asm__("fstp qword [esp]");
    fun_8049040("FILD(10k):  should=             10000.000000/   1.000000e+04 is=%25f/%15e\n", v1, v2, v3, v4);
    __asm__("fild dword [0x804ceab]");
    __asm__("fst qword [esp+0x8]");
    __asm__("fstp qword [esp]");
    fun_8049040("FILD(1G):   should=        1000000000.000000/   1.000000e+09 is=%25f/%15e\n", v5, v6, v7, v8);
    __asm__("fild qword [0x804ceaf]");
    __asm__("fst qword [esp+0x8]");
    __asm__("fstp qword [esp]");
    fun_8049040("FILD(1P):   should=  1000000000000000.000000/   1.000000e+15 is=%25f/%15e\n", v9, v10, v11, v12);
    return 0;
}

int32_t FIST(int32_t a1, uint32_t a2, uint32_t a3, uint32_t a4) {
    uint32_t v5;
    uint32_t v6;
    uint32_t v7;
    uint32_t v8;
    uint32_t v9;
    uint32_t v10;
    uint32_t v11;
    uint32_t v12;
    uint32_t v13;
    uint32_t v14;
    uint32_t v15;
    uint32_t v16;
    uint32_t v17;
    uint32_t v18;
    uint32_t v19;
    uint32_t v20;
    uint32_t v21;
    uint32_t v22;
    uint32_t v23;
    uint32_t v24;
    uint32_t v25;
    uint32_t v26;
    uint32_t v27;
    uint32_t v28;
    uint32_t v29;
    uint32_t v30;
    uint32_t v31;
    uint32_t v32;
    uint32_t v33;
    uint32_t v34;

    fun_8049050("FIST:\n  RC=00: to nearest\n  RC=01: down to -inf\n  RC=10: up to +inf\n  RC=11: to zero\n", __return_address());
    __asm__("fld qword [0x804d0be]");
    __asm__("fisttp dword [esp+0x18]");
    __asm__("fld qword [0x804d0be]");
    __asm__("fstp qword [esp+0x4]");
    fun_8049040("  FISTT(%f):        should=12 is=%d\n", v5, v6, "FIST:\n  RC=00: to nearest\n  RC=01: down to -inf\n  RC=10: up to +inf\n  RC=11: to zero\n", v7);
    __asm__("fld qword [0x804d0be]");
    __asm__("fnstcw word [esp+0x16]");
    __asm__("fldcw word [esp+0x16]");
    __asm__("fist dword [esp+0x18]");
    __asm__("fldcw word [esp+0x16]");
    __asm__("fstp qword [esp+0x4]");
    fun_8049040("  FIST(%f,RC=00):   should=13 is=%d\n", v8, v9, "FIST:\n  RC=00: to nearest\n  RC=01: down to -inf\n  RC=10: up to +inf\n  RC=11: to zero\n", v10);
    __asm__("fld qword [0x804d0be]");
    __asm__("fnstcw word [esp+0x16]");
    __asm__("fldcw word [esp+0x16]");
    __asm__("fist dword [esp+0x18]");
    __asm__("fldcw word [esp+0x16]");
    __asm__("fstp qword [esp+0x4]");
    fun_8049040("  FIST(%f,RC=01):   should=12 is=%d\n", v11, v12, "FIST:\n  RC=00: to nearest\n  RC=01: down to -inf\n  RC=10: up to +inf\n  RC=11: to zero\n", v13);
    __asm__("fld qword [0x804d0be]");
    __asm__("fnstcw word [esp+0x16]");
    __asm__("fldcw word [esp+0x16]");
    __asm__("fist dword [esp+0x18]");
    __asm__("fldcw word [esp+0x16]");
    __asm__("fstp qword [esp+0x4]");
    fun_8049040("  FIST(%f,RC=10):   should=13 is=%d\n", v14, v15, "FIST:\n  RC=00: to nearest\n  RC=01: down to -inf\n  RC=10: up to +inf\n  RC=11: to zero\n", v16);
    __asm__("fld qword [0x804d0be]");
    __asm__("fnstcw word [esp+0x16]");
    __asm__("fldcw word [esp+0x16]");
    __asm__("fist dword [esp+0x18]");
    __asm__("fldcw word [esp+0x16]");
    __asm__("fstp qword [esp+0x4]");
    fun_8049040("  FIST(%f,RC=11):   should=12 is=%d\n", v17, v18, "FIST:\n  RC=00: to nearest\n  RC=01: down to -inf\n  RC=10: up to +inf\n  RC=11: to zero\n", v19);
    __asm__("fld qword [0x804d0c6]");
    __asm__("fisttp dword [esp+0x18]");
    __asm__("fld qword [0x804d0c6]");
    __asm__("fstp qword [esp+0x4]");
    fun_8049040("  FISTT(%f):        should=-7 is=%d\n", v20, v21, "FIST:\n  RC=00: to nearest\n  RC=01: down to -inf\n  RC=10: up to +inf\n  RC=11: to zero\n", v22);
    __asm__("fld qword [0x804d0c6]");
    __asm__("fnstcw word [esp+0x16]");
    __asm__("fldcw word [esp+0x16]");
    __asm__("fist dword [esp+0x18]");
    __asm__("fldcw word [esp+0x16]");
    __asm__("fstp qword [esp+0x4]");
    fun_8049040("  FIST(%f,RC=00):   should=-7 is=%d\n", v23, v24, "FIST:\n  RC=00: to nearest\n  RC=01: down to -inf\n  RC=10: up to +inf\n  RC=11: to zero\n", v25);
    __asm__("fld qword [0x804d0c6]");
    __asm__("fnstcw word [esp+0x16]");
    __asm__("fldcw word [esp+0x16]");
    __asm__("fist dword [esp+0x18]");
    __asm__("fldcw word [esp+0x16]");
    __asm__("fstp qword [esp+0x4]");
    fun_8049040("  FIST(%f,RC=01):   should=-8 is=%d\n", v26, v27, "FIST:\n  RC=00: to nearest\n  RC=01: down to -inf\n  RC=10: up to +inf\n  RC=11: to zero\n", v28);
    __asm__("fld qword [0x804d0c6]");
    __asm__("fnstcw word [esp+0x16]");
    __asm__("fldcw word [esp+0x16]");
    __asm__("fist dword [esp+0x18]");
    __asm__("fldcw word [esp+0x16]");
    __asm__("fstp qword [esp+0x4]");
    fun_8049040("  FIST(%f,RC=10):   should=-7 is=%d\n", v29, v30, "FIST:\n  RC=00: to nearest\n  RC=01: down to -inf\n  RC=10: up to +inf\n  RC=11: to zero\n", v31);
    __asm__("fld qword [0x804d0c6]");
    __asm__("fnstcw word [esp+0x16]");
    __asm__("fldcw word [esp+0x16]");
    __asm__("fist dword [esp+0x18]");
    __asm__("fldcw word [esp+0x16]");
    __asm__("fstp qword [esp+0x4]");
    fun_8049040("  FIST(%f,RC=11):   should=-7 is=%d\n", v32, v33, "FIST:\n  RC=00: to nearest\n  RC=01: down to -inf\n  RC=10: up to +inf\n  RC=11: to zero\n", v34);
    return 0;
}

int32_t FLD() {
    uint32_t v1;
    uint32_t v2;
    uint32_t v3;
    uint32_t v4;
    uint32_t v5;
    uint32_t v6;
    uint32_t v7;
    uint32_t v8;
    uint32_t v9;
    uint32_t v10;
    uint32_t v11;
    uint32_t v12;

    __asm__("fld dword [0x804d1b7]");
    __asm__("fst qword [esp+0x8]");
    __asm__("fstp qword [esp]");
    fun_8049040("FLD(float=12.34...):       should=   12.345679/   1.234568e+01 is=%12f/%15e\n", v1, v2, v3, v4);
    __asm__("fld qword [0x804d1bb]");
    __asm__("fst qword [esp+0x8]");
    __asm__("fstp qword [esp]");
    fun_8049040("FLD(double=12.34...):      should=   12.345679/   1.234568e+01 is=%12f/%15e\n", v5, v6, v7, v8);
    __asm__("fld tword [0x804d1c3]");
    __asm__("fst qword [esp+0x8]");
    __asm__("fstp qword [esp]");
    fun_8049040("FLD(long double=12.34...): should=   12.345679/   1.234568e+01 is=%12f/%15e\n", v9, v10, v11, v12);
    return 0;
}

int32_t FLDC() {
    uint32_t v1;
    uint32_t v2;
    uint32_t v3;
    uint32_t v4;
    uint32_t v5;
    uint32_t v6;
    uint32_t v7;
    uint32_t v8;
    uint32_t v9;
    uint32_t v10;
    uint32_t v11;
    uint32_t v12;
    uint32_t v13;
    uint32_t v14;
    uint32_t v15;
    uint32_t v16;
    uint32_t v17;
    uint32_t v18;
    uint32_t v19;
    uint32_t v20;
    uint32_t v21;
    uint32_t v22;
    uint32_t v23;
    uint32_t v24;
    uint32_t v25;
    uint32_t v26;
    uint32_t v27;
    uint32_t v28;

    __asm__("fld1 ");
    __asm__("fst qword [esp+0x8]");
    __asm__("fstp qword [esp]");
    fun_8049040("FLD1:   should=    1.000000/   1.000000e+00 is=%12f/%15e\n", v1, v2, v3, v4);
    __asm__("fldl2e ");
    __asm__("fst qword [esp+0x8]");
    __asm__("fstp qword [esp]");
    fun_8049040("FLDL2E: should=    1.442695/   1.442695e+00 is=%12f/%15e\n", v5, v6, v7, v8);
    __asm__("fldl2t ");
    __asm__("fst qword [esp+0x8]");
    __asm__("fstp qword [esp]");
    fun_8049040("FLDL2T: should=    3.321928/   3.321928e+00 is=%12f/%15e\n", v9, v10, v11, v12);
    __asm__("fldlg2 ");
    __asm__("fst qword [esp+0x8]");
    __asm__("fstp qword [esp]");
    fun_8049040("FLDLG2: should=    0.301030/   3.010300e-01 is=%12f/%15e\n", v13, v14, v15, v16);
    __asm__("fldln2 ");
    __asm__("fst qword [esp+0x8]");
    __asm__("fstp qword [esp]");
    fun_8049040("FLDLN2: should=    0.693147/   6.931472e-01 is=%12f/%15e\n", v17, v18, v19, v20);
    __asm__("fldlpi ");
    __asm__("fst qword [esp+0x8]");
    __asm__("fstp qword [esp]");
    fun_8049040("FLDPI:  should=    3.141593/   3.141593e+00 is=%12f/%15e\n", v21, v22, v23, v24);
    __asm__("fldz ");
    __asm__("fst qword [esp+0x8]");
    __asm__("fstp qword [esp]");
    fun_8049040("FLDZ:   should=    0.000000/   0.000000e+00 is=%12f/%15e\n", v25, v26, v27, v28);
    return 0;
}

int32_t FMUL(int32_t a1, uint32_t a2, uint32_t a3, uint32_t a4) {
    uint32_t v5;
    uint32_t v6;
    uint32_t v7;
    uint32_t v8;
    uint32_t v9;
    uint32_t v10;
    uint32_t v11;
    uint32_t v12;
    uint32_t v13;
    uint32_t v14;
    uint32_t v15;
    uint32_t v16;

    __asm__("fld qword [esp+0x2c]");
    __asm__("fldlpi ");
    __asm__("fmulp st1, st0");
    __asm__("fst qword [esp+0x8]");
    __asm__("fstp qword [esp]");
    fun_8049040("FMUL(para*pi):  should=                             is=%12f/%15e\n", v5, v6, v7, v8);
    __asm__("fld qword [0x804c3cc]");
    __asm__("fldlpi ");
    __asm__("fmulp st1, st0");
    __asm__("fst qword [esp+0x8]");
    __asm__("fstp qword [esp]");
    fun_8049040("FMUL(12.34*pi): should=   38.767253/   3.876725e+01 is=%12f/%15e\n", v9, v10, v11, v12);
    __asm__("fldlpi ");
    __asm__("fimul word [0x804c3d4]");
    __asm__("fst qword [esp+0x8]");
    __asm__("fstp qword [esp]");
    fun_8049040("FIMUL(1000*pi): should= 3141.592654/   3.141593e+03 is=%12f/%15e\n", v13, v14, v15, v16);
    return 0;
}

int32_t FPATAN(int32_t a1, uint32_t a2, uint32_t a3, uint32_t a4) {
    uint32_t v5;
    uint32_t v6;
    uint32_t v7;
    uint32_t v8;
    uint32_t v9;
    uint32_t v10;
    uint32_t v11;
    uint32_t v12;
    uint32_t v13;
    uint32_t v14;
    uint32_t v15;
    uint32_t v16;

    __asm__("fld1 ");
    __asm__("fld qword [esp+0x2c]");
    __asm__("fpatan ");
    __asm__("fst qword [esp+0x8]");
    __asm__("fstp qword [esp]");
    fun_8049040("FPATAN(y=1 x=para): should=                             is=%12f/%15e\n", v5, v6, v7, v8);
    __asm__("fld1 ");
    __asm__("fldz ");
    __asm__("fpatan ");
    __asm__("fst qword [esp+0x8]");
    __asm__("fstp qword [esp]");
    fun_8049040("FPATAN(y=1 x=0):    should=    1.570796/   1.570796e+00 is=%12f/%15e\n", v9, v10, v11, v12);
    __asm__("fld1 ");
    __asm__("fld1 ");
    __asm__("fpatan ");
    __asm__("fst qword [esp+0x8]");
    __asm__("fstp qword [esp]");
    fun_8049040("FPATAN(y=1 x=1):    should=    0.785398/   7.853982e-01 is=%12f/%15e\n", v13, v14, v15, v16);
    return 0;
}

int32_t FPREM(int32_t a1, uint32_t a2, uint32_t a3, uint32_t a4) {
    uint32_t v5;
    uint32_t v6;
    uint32_t v7;
    uint32_t v8;
    uint32_t v9;
    uint32_t v10;
    uint32_t v11;
    uint32_t v12;
    int16_t ax13;
    int16_t fpu_status_word14;
    uint32_t v15;
    uint32_t v16;
    uint32_t v17;
    uint32_t v18;

    __asm__("fild word [0x804d5ea]");
    __asm__("fild word [0x804d5e8]");
    __asm__("fprem ");
    __asm__("fstp st1");
    __asm__("fst qword [esp+0x8]");
    __asm__("fstp qword [esp]");
    fun_8049040("FPREM(11 mod 7):          should=    4.000000/   4.000000e+00 is=%12f/%15e\n", v5, v6, v7, v8);
    __asm__("fild word [0x804d5ea]");
    __asm__("fild word [0x804d5e8]");
    __asm__("fprem1 ");
    __asm__("fstp st1");
    __asm__("fst qword [esp+0x8]");
    __asm__("fstp qword [esp]");
    fun_8049040("FPREM1(11 mod 7):         should=   -3.000000/  -3.000000e+00 is=%12f/%15e\n", v9, v10, v11, v12);
    __asm__("fld qword [esp+0x2c]");
    __asm__("fldlpi ");
    __asm__("fadd st0, st0");
    __asm__("fxch st0, st1");
    do {
        __asm__("fprem ");
        __asm__("wait ");
        ax13 = fpu_status_word14;
        __asm__("wait ");
    } while (*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax13) + 1));
    __asm__("fstp st1");
    __asm__("fst qword [esp+0x8]");
    __asm__("fstp qword [esp]");
    fun_8049040("reduced para using FPREM: should=                             is=%12f/%15e\n", v15, v16, v17, v18);
    return 0;
}

int32_t FPTAN(int32_t a1, uint32_t a2, uint32_t a3, uint32_t a4) {
    uint32_t v5;
    uint32_t v6;
    uint32_t v7;
    uint32_t v8;
    uint32_t v9;
    uint32_t v10;
    uint32_t v11;
    uint32_t v12;
    uint32_t v13;
    uint32_t v14;
    uint32_t v15;
    uint32_t v16;
    uint32_t v17;
    uint32_t v18;
    uint32_t v19;
    uint32_t v20;

    __asm__("fld qword [esp+0x2c]");
    __asm__("fptan ");
    __asm__("fstp st0");
    __asm__("fst qword [esp+0x8]");
    __asm__("fstp qword [esp]");
    fun_8049040("FPTAN(para): should=                             is=%12f/%15e\n", v5, v6, v7, v8);
    __asm__("fldz ");
    __asm__("fptan ");
    __asm__("fstp st0");
    __asm__("fst qword [esp+0x8]");
    __asm__("fstp qword [esp]");
    fun_8049040("FPTAN(0):    should=    0.000000/   0.000000e+00 is=%12f/%15e\n", v9, v10, v11, v12);
    __asm__("fldz ");
    __asm__("fptan ");
    __asm__("fstp st1");
    __asm__("fst qword [esp+0x8]");
    __asm__("fstp qword [esp]");
    fun_8049040("FPTAN(0)[1]: should=    1.000000/   1.000000e+00 is=%12f/%15e\n", v13, v14, v15, v16);
    __asm__("fld1 ");
    __asm__("fld1 ");
    __asm__("faddp st1, st0");
    __asm__("fld1 ");
    __asm__("faddp st1, st0");
    __asm__("fld1 ");
    __asm__("faddp st1, st0");
    __asm__("fldlpi ");
    __asm__("fdivrp st1, st0");
    __asm__("fptan ");
    __asm__("fstp st0");
    __asm__("fst qword [esp+0x8]");
    __asm__("fstp qword [esp]");
    fun_8049040("FPTAN(pi/4): should=    1.000000/   1.000000e+00 is=%12f/%15e\n", v17, v18, v19, v20);
    return 0;
}

int32_t FRNDINT(int32_t a1, uint32_t a2, uint32_t a3, uint32_t a4) {
    uint32_t v5;
    uint32_t v6;
    uint32_t v7;
    uint32_t v8;
    uint32_t v9;
    uint32_t v10;
    uint32_t v11;
    uint32_t v12;
    uint32_t v13;
    uint32_t v14;
    uint32_t v15;
    uint32_t v16;
    uint32_t v17;
    uint32_t v18;
    uint32_t v19;
    uint32_t v20;
    uint32_t v21;
    uint32_t v22;
    uint32_t v23;
    uint32_t v24;
    uint32_t v25;
    uint32_t v26;
    uint32_t v27;
    uint32_t v28;
    uint32_t v29;
    uint32_t v30;
    uint32_t v31;
    uint32_t v32;
    uint32_t v33;
    uint32_t v34;
    uint32_t v35;
    uint32_t v36;
    uint32_t v37;
    uint32_t v38;
    uint32_t v39;
    uint32_t v40;
    int32_t v41;
    int32_t v42;
    int32_t v43;
    int32_t v44;

    fun_8049050("FRNDINT:\n  RC=00: to nearest\n  RC=01: down to -inf\n  RC=10: up to +inf\n  RC=11: to zero\n", __return_address());
    __asm__("fld qword [esp+0x2c]");
    __asm__("frndint ");
    __asm__("fst qword [esp+0x8]");
    __asm__("fstp qword [esp]");
    fun_8049040("  FRNDINT(para):              should=                             is=%12f/%15e\n", v5, v6, v7, v8);
    __asm__("fld qword [0x804d0be]");
    __asm__("fst qword [esp+0x4]");
    __asm__("fnstcw word [esp+0x20]");
    __asm__("fldcw word [esp+0x20]");
    __asm__("frndint ");
    __asm__("fldcw word [esp+0x20]");
    __asm__("fst qword [esp+0xc]");
    __asm__("fstp qword [esp+0x14]");
    fun_8049040("  FRNDINT(%f,RC=00):   should=   13.000000/   1.300000e+01 is=%12f/%15e\n", v9, v10, v11, v12);
    __asm__("fld qword [0x804d0be]");
    __asm__("fst qword [esp+0x4]");
    __asm__("fnstcw word [esp+0x20]");
    __asm__("fldcw word [esp+0x20]");
    __asm__("frndint ");
    __asm__("fldcw word [esp+0x20]");
    __asm__("fst qword [esp+0xc]");
    __asm__("fstp qword [esp+0x14]");
    fun_8049040("  FRNDINT(%f,RC=01):   should=   12.000000/   1.200000e+01 is=%12f/%15e\n", v13, v14, v15, v16);
    __asm__("fld qword [0x804d0be]");
    __asm__("fst qword [esp+0x4]");
    __asm__("fnstcw word [esp+0x20]");
    __asm__("fldcw word [esp+0x20]");
    __asm__("frndint ");
    __asm__("fldcw word [esp+0x20]");
    __asm__("fst qword [esp+0xc]");
    __asm__("fstp qword [esp+0x14]");
    fun_8049040("  FRNDINT(%f,RC=10):   should=   13.000000/   1.300000e+01 is=%12f/%15e\n", v17, v18, v19, v20);
    __asm__("fld qword [0x804d0be]");
    __asm__("fst qword [esp+0x4]");
    __asm__("fnstcw word [esp+0x20]");
    __asm__("fldcw word [esp+0x20]");
    __asm__("frndint ");
    __asm__("fldcw word [esp+0x20]");
    __asm__("fst qword [esp+0xc]");
    __asm__("fstp qword [esp+0x14]");
    fun_8049040("  FRNDINT(%f,RC=11):   should=   12.000000/   1.200000e+01 is=%12f/%15e\n", v21, v22, v23, v24);
    __asm__("fld qword [0x804d0c6]");
    __asm__("fst qword [esp+0x4]");
    __asm__("fnstcw word [esp+0x20]");
    __asm__("fldcw word [esp+0x20]");
    __asm__("frndint ");
    __asm__("fldcw word [esp+0x20]");
    __asm__("fst qword [esp+0xc]");
    __asm__("fstp qword [esp+0x14]");
    fun_8049040("  FRNDINT(%f,RC=00):   should=   -7.000000/  -7.000000e+00 is=%12f/%15e\n", v25, v26, v27, v28);
    __asm__("fld qword [0x804d0c6]");
    __asm__("fst qword [esp+0x4]");
    __asm__("fnstcw word [esp+0x20]");
    __asm__("fldcw word [esp+0x20]");
    __asm__("frndint ");
    __asm__("fldcw word [esp+0x20]");
    __asm__("fst qword [esp+0xc]");
    __asm__("fstp qword [esp+0x14]");
    fun_8049040("  FRNDINT(%f,RC=01):   should=   -8.000000/  -8.000000e+00 is=%12f/%15e\n", v29, v30, v31, v32);
    __asm__("fld qword [0x804d0c6]");
    __asm__("fst qword [esp+0x4]");
    __asm__("fnstcw word [esp+0x20]");
    __asm__("fldcw word [esp+0x20]");
    __asm__("frndint ");
    __asm__("fldcw word [esp+0x20]");
    __asm__("fst qword [esp+0xc]");
    __asm__("fstp qword [esp+0x14]");
    fun_8049040("  FRNDINT(%f,RC=10):   should=   -7.000000/  -7.000000e+00 is=%12f/%15e\n", v33, v34, v35, v36);
    __asm__("fld qword [0x804d0c6]");
    __asm__("fst qword [esp+0x4]");
    __asm__("fnstcw word [esp+0x20]");
    __asm__("fldcw word [esp+0x20]");
    __asm__("frndint ");
    __asm__("fldcw word [esp+0x20]");
    __asm__("fst qword [esp+0xc]");
    __asm__("fstp qword [esp+0x14]");
    fun_8049040("  FRNDINT(%f,RC=11):   should=   -7.000000/  -7.000000e+00 is=%12f/%15e\n", v37, v38, v39, v40, "  FRNDINT(%f,RC=11):   should=   -7.000000/  -7.000000e+00 is=%12f/%15e\n", v41, v42, v43, v44);
    return 0;
}

int32_t FSCALE(int32_t a1, uint32_t a2, uint32_t a3, uint32_t a4) {
    uint32_t v5;
    uint32_t v6;
    uint32_t v7;
    uint32_t v8;
    uint32_t v9;
    uint32_t v10;
    uint32_t v11;
    uint32_t v12;
    uint32_t v13;
    uint32_t v14;
    uint32_t v15;
    uint32_t v16;
    uint32_t v17;
    uint32_t v18;
    uint32_t v19;
    uint32_t v20;
    uint32_t v21;
    uint32_t v22;
    uint32_t v23;
    uint32_t v24;

    __asm__("fild word [0x804db42]");
    __asm__("fld qword [esp+0x2c]");
    __asm__("fscale ");
    __asm__("fst qword [esp+0x8]");
    __asm__("fstp qword [esp]");
    __asm__("fstp st0");
    fun_8049040("FSCALE(para*2^4):   should=                             is=%12f/%15e\n", v5, v6, v7, v8);
    __asm__("fld qword [esp+0x2c]");
    __asm__("fldlpi ");
    __asm__("fscale ");
    __asm__("fst qword [esp+0x8]");
    __asm__("fstp qword [esp]");
    __asm__("fstp st0");
    fun_8049040("FSCALE(pi*2^para):  should=                             is=%12f/%15e\n", v9, v10, v11, v12);
    __asm__("fild word [0x804db42]");
    __asm__("fldlpi ");
    __asm__("fscale ");
    __asm__("fst qword [esp+0x8]");
    __asm__("fstp qword [esp]");
    __asm__("fstp st0");
    fun_8049040("FSCALE(pi*2^4):     should=   50.265482/   5.026548e+01 is=%12f/%15e\n", v13, v14, v15, v16);
    __asm__("fild word [0x804db42]");
    __asm__("fchs ");
    __asm__("fldlpi ");
    __asm__("fscale ");
    __asm__("fst qword [esp+0x8]");
    __asm__("fstp qword [esp]");
    __asm__("fstp st0");
    fun_8049040("FSCALE(pi*2^-4):    should=    0.196350/   1.963495e-01 is=%12f/%15e\n", v17, v18, v19, v20);
    __asm__("fld qword [0x804db3a]");
    __asm__("fldlpi ");
    __asm__("fscale ");
    __asm__("fst qword [esp+0x8]");
    __asm__("fstp qword [esp]");
    __asm__("fstp st0");
    fun_8049040("FSCALE(pi*2^12.34): should=12867.963509/   1.286796e+04 is=%12f/%15e\n", v21, v22, v23, v24);
    return 0;
}

int32_t FSIN(int32_t a1, uint32_t a2, uint32_t a3, uint32_t a4) {
    uint32_t v5;
    uint32_t v6;
    uint32_t v7;
    uint32_t v8;
    uint32_t v9;
    uint32_t v10;
    uint32_t v11;
    uint32_t v12;
    uint32_t v13;
    uint32_t v14;
    uint32_t v15;
    uint32_t v16;
    uint32_t v17;
    uint32_t v18;
    uint32_t v19;
    uint32_t v20;

    __asm__("fld qword [esp+0x2c]");
    __asm__("fsin ");
    __asm__("fst qword [esp+0x8]");
    __asm__("fstp qword [esp]");
    fun_8049040("FSIN(para):  should=                              is=%12f/%15e\n", v5, v6, v7, v8);
    __asm__("fldz ");
    __asm__("fsin ");
    __asm__("fst qword [esp+0x8]");
    __asm__("fstp qword [esp]");
    fun_8049040("FSIN(0):     should=     0.000000/   0.000000e+00 is=%12f/%15e\n", v9, v10, v11, v12);
    __asm__("fild word [0x804dc44]");
    __asm__("fldlpi ");
    __asm__("fdivrp st1, st0");
    __asm__("fsin ");
    __asm__("fst qword [esp+0x8]");
    __asm__("fstp qword [esp]");
    fun_8049040("FSIN(pi/6):  should=     0.500000/   5.000000e-01 is=%12f/%15e\n", v13, v14, v15, v16);
    __asm__("fld1 ");
    __asm__("fld1 ");
    __asm__("faddp st1, st0");
    __asm__("fldlpi ");
    __asm__("fdivrp st1, st0");
    __asm__("fsin ");
    __asm__("fst qword [esp+0x8]");
    __asm__("fstp qword [esp]");
    fun_8049040("FSIN(pi/2):  should=     1.000000/   1.000000e+00 is=%12f/%15e\n", v17, v18, v19, v20);
    return 0;
}

int32_t FSINCOS(int32_t a1, uint32_t a2, uint32_t a3, uint32_t a4) {
    uint32_t v5;
    uint32_t v6;
    uint32_t v7;
    uint32_t v8;
    uint32_t v9;
    uint32_t v10;
    uint32_t v11;
    uint32_t v12;
    uint32_t v13;
    uint32_t v14;
    uint32_t v15;
    uint32_t v16;
    uint32_t v17;
    uint32_t v18;
    uint32_t v19;
    uint32_t v20;

    __asm__("fld qword [esp+0x2c]");
    __asm__("fsincos ");
    __asm__("fst qword [esp+0x8]");
    __asm__("fstp qword [esp]");
    __asm__("fstp st0");
    fun_8049040("FSINCOS(para)[0=cos]:  should=                              is=%12f/%15e\n", v5, v6, v7, v8);
    __asm__("fld qword [esp+0x2c]");
    __asm__("fsincos ");
    __asm__("fstp st0");
    __asm__("fst qword [esp+0x8]");
    __asm__("fstp qword [esp]");
    fun_8049040("FSINCOS(para)[1=sin]:  should=                              is=%12f/%15e\n", v9, v10, v11, v12);
    __asm__("fldz ");
    __asm__("fsincos ");
    __asm__("fst qword [esp+0x8]");
    __asm__("fstp qword [esp]");
    __asm__("fstp st0");
    fun_8049040("FSINCOS(0)[0=cos]:     should=     1.000000/   1.000000e+00 is=%12f/%15e\n", v13, v14, v15, v16);
    __asm__("fldz ");
    __asm__("fsincos ");
    __asm__("fstp st0");
    __asm__("fst qword [esp+0x8]");
    __asm__("fstp qword [esp]");
    fun_8049040("FSINCOS(0)[1=sin]:     should=     0.000000/   0.000000e+00 is=%12f/%15e\n", v17, v18, v19, v20);
    return 0;
}

int32_t FSQRT(int32_t a1, uint32_t a2, uint32_t a3, uint32_t a4) {
    uint32_t v5;
    uint32_t v6;
    uint32_t v7;
    uint32_t v8;
    uint32_t v9;
    uint32_t v10;
    uint32_t v11;
    uint32_t v12;
    uint32_t v13;
    uint32_t v14;
    uint32_t v15;
    uint32_t v16;

    __asm__("fld qword [esp+0x2c]");
    __asm__("fsqrt ");
    __asm__("fst qword [esp+0x8]");
    __asm__("fstp qword [esp]");
    fun_8049040("FSQRT(para):     should=                             is=%12f/%15e\n", v5, v6, v7, v8);
    __asm__("fldlpi ");
    __asm__("fsqrt ");
    __asm__("fst qword [esp+0x8]");
    __asm__("fstp qword [esp]");
    fun_8049040("FSQRT(pi):       should=    1.772454/   1.772454e+00 is=%12f/%15e\n", v9, v10, v11, v12);
    __asm__("fld qword [0x804de39]");
    __asm__("fsqrt ");
    __asm__("fst qword [esp+0x8]");
    __asm__("fstp qword [esp]");
    fun_8049040("FSQRT(152.2756): should=   12.340000/   1.234000e+01 is=%12f/%15e\n", v13, v14, v15, v16);
    return 0;
}

unsigned char g805002b = 0;

unsigned char g805002a = 0;

int32_t FST(int32_t a1, uint32_t a2, uint32_t a3, uint32_t a4) {
    uint32_t eax5;
    uint32_t eax6;
    uint32_t eax7;
    uint32_t eax8;
    uint32_t eax9;
    uint32_t eax10;
    uint32_t eax11;
    uint32_t eax12;
    uint32_t eax13;
    uint32_t eax14;
    uint32_t eax15;
    uint32_t eax16;

    __asm__("fldlpi ");
    __asm__("fstp dword [0x8050028]");
    eax5 = g805002b;
    eax6 = g805002a;
    eax7 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&buffer) + 1);
    eax8 = *reinterpret_cast<unsigned char*>(&buffer);
    fun_8049040("FST(pi as float)       should=0xdb 0x0f 0x49 0x40                               is=0x%02x 0x%02x 0x%02x 0x%02x\n", eax8, eax7, eax6, eax5);
    __asm__("fldlpi ");
    __asm__("fstp qword [0x8050028]");
    eax9 = g805002b;
    eax10 = g805002a;
    eax11 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&buffer) + 1);
    eax12 = *reinterpret_cast<unsigned char*>(&buffer);
    fun_8049040("FST(pi as double)      should=0x18 0x2d 0x44 0x54 0xfb 0x21 0x09 0x40           is=0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x\n", eax12, eax11, eax10, eax9, "FST(pi as double)      should=0x18 0x2d 0x44 0x54 0xfb 0x21 0x09 0x40           is=0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x\n", eax12, eax11, eax10, eax9);
    __asm__("fldlpi ");
    __asm__("fstp tword [0x8050028]");
    eax13 = g805002b;
    eax14 = g805002a;
    eax15 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&buffer) + 1);
    eax16 = *reinterpret_cast<unsigned char*>(&buffer);
    fun_8049040("FST(pi as long double) should=0x35 0xc2 0x68 0x21 0xa2 0xda 0x0f 0xc9 0x00 0x40 is=0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x\n", eax16, eax15, eax14, eax13, "FST(pi as long double) should=0x35 0xc2 0x68 0x21 0xa2 0xda 0x0f 0xc9 0x00 0x40 is=0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x\n", eax16, eax15, eax14, eax13);
    return 0;
}

int32_t FSUB(int32_t a1, uint32_t a2, uint32_t a3, uint32_t a4) {
    uint32_t v5;
    uint32_t v6;
    uint32_t v7;
    uint32_t v8;
    uint32_t v9;
    uint32_t v10;
    uint32_t v11;
    uint32_t v12;
    uint32_t v13;
    uint32_t v14;
    uint32_t v15;
    uint32_t v16;
    uint32_t v17;
    uint32_t v18;
    uint32_t v19;
    uint32_t v20;

    __asm__("fld qword [esp+0x2c]");
    __asm__("fld1 ");
    __asm__("fsubrp st1, st0");
    __asm__("fst qword [esp+0x8]");
    __asm__("fstp qword [esp]");
    fun_8049040("FSUB(1-para):     should=                             is=%12f/%15e\n", v5, v6, v7, v8);
    __asm__("fld qword [0x804c3cc]");
    __asm__("fld qword [esp+0x2c]");
    __asm__("fsubrp st1, st0");
    __asm__("fst qword [esp+0x8]");
    __asm__("fstp qword [esp]");
    fun_8049040("FSUB(para-12.34): should=                             is=%12f/%15e\n", v9, v10, v11, v12);
    __asm__("fldlpi ");
    __asm__("fld1 ");
    __asm__("fsubrp st1, st0");
    __asm__("fst qword [esp+0x8]");
    __asm__("fstp qword [esp]");
    fun_8049040("FSUB(1-pi):       should=   -2.141593/  -2.141593e+00 is=%12f/%15e\n", v13, v14, v15, v16);
    __asm__("fldlpi ");
    __asm__("fisub word [0x804c3d4]");
    __asm__("fst qword [esp+0x8]");
    __asm__("fstp qword [esp]");
    fun_8049040("FISUB(pi-1000):   should= -996.858407/  -9.968584e+02 is=%12f/%15e\n", v17, v18, v19, v20);
    return 0;
}

int32_t FTST(int32_t a1, uint32_t a2, uint32_t a3, uint32_t a4) {
    uint16_t fpu_status_word5;
    uint32_t v6;
    uint32_t v7;
    uint32_t v8;
    uint16_t fpu_status_word9;
    uint32_t v10;
    uint32_t v11;
    uint32_t v12;
    uint16_t fpu_status_word13;
    uint32_t v14;
    uint32_t v15;
    uint32_t v16;
    uint16_t fpu_status_word17;
    uint32_t v18;
    uint32_t v19;
    uint32_t v20;
    uint16_t fpu_status_word21;
    uint32_t v22;
    uint32_t v23;
    uint32_t v24;

    __asm__("fld qword [esp+0x2c]");
    __asm__("ftst ");
    __asm__("wait ");
    __asm__("fstp st0");
    fun_8049040("FTST(para): should=0x0100 is=0x%04x\n", static_cast<uint32_t>(reinterpret_cast<uint16_t>(fpu_status_word5 & 0x4500)), v6, v7, v8);
    __asm__("fldlpi ");
    __asm__("ftst ");
    __asm__("wait ");
    __asm__("fstp st0");
    fun_8049040("FTST(pi):   should=0x0000 is=0x%04x\n", static_cast<uint32_t>(reinterpret_cast<uint16_t>(fpu_status_word9 & 0x4500)), v10, v11, v12);
    __asm__("fldlpi ");
    __asm__("fchs ");
    __asm__("ftst ");
    __asm__("wait ");
    __asm__("fstp st0");
    fun_8049040("FTST(-pi):  should=0x0100 is=0x%04x\n", static_cast<uint32_t>(reinterpret_cast<uint16_t>(fpu_status_word13 & 0x4500)), v14, v15, v16);
    __asm__("fldz ");
    __asm__("ftst ");
    __asm__("wait ");
    __asm__("fstp st0");
    fun_8049040("FTST(0.0):  should=0x4000 is=0x%04x\n", static_cast<uint32_t>(reinterpret_cast<uint16_t>(fpu_status_word17 & 0x4500)), v18, v19, v20);
    __asm__("fldz ");
    __asm__("fldz ");
    __asm__("fdivrp st1, st0");
    __asm__("ftst ");
    __asm__("wait ");
    __asm__("fstp st0");
    fun_8049040("FTST(nan):  should=0x4500 is=0x%04x\n", static_cast<uint32_t>(reinterpret_cast<uint16_t>(fpu_status_word21 & 0x4500)), v22, v23, v24);
    return 0;
}

int32_t FXAM(int32_t a1, uint32_t a2, uint32_t a3, uint32_t a4) {
    uint16_t fpu_status_word5;
    uint32_t v6;
    uint32_t v7;
    uint32_t v8;
    uint16_t fpu_status_word9;
    uint32_t v10;
    uint32_t v11;
    uint32_t v12;
    uint16_t fpu_status_word13;
    uint32_t v14;
    uint32_t v15;
    uint32_t v16;
    uint16_t fpu_status_word17;
    uint32_t v18;
    uint32_t v19;
    uint32_t v20;
    uint16_t fpu_status_word21;
    uint32_t v22;
    uint32_t v23;
    uint32_t v24;
    uint16_t fpu_status_word25;
    uint32_t v26;
    uint32_t v27;
    uint32_t v28;

    __asm__("fld qword [esp+0x2c]");
    __asm__("fxam ");
    __asm__("wait ");
    __asm__("fstp st0");
    fun_8049040("FXAM(para):  should=0x0400 is=0x%04x\n", static_cast<uint32_t>(reinterpret_cast<uint16_t>(fpu_status_word5 & 0x4500)), v6, v7, v8);
    __asm__("fldlpi ");
    __asm__("fxam ");
    __asm__("wait ");
    __asm__("fstp st0");
    fun_8049040("FXAM(pi):    should=0x0400 is=0x%04x\n", static_cast<uint32_t>(reinterpret_cast<uint16_t>(fpu_status_word9 & 0x4500)), v10, v11, v12);
    __asm__("fldz ");
    __asm__("fxam ");
    __asm__("wait ");
    __asm__("fstp st0");
    fun_8049040("FXAM(0.0):   should=0x4000 is=0x%04x\n", static_cast<uint32_t>(reinterpret_cast<uint16_t>(fpu_status_word13 & 0x4500)), v14, v15, v16);
    __asm__("fldz ");
    __asm__("fldz ");
    __asm__("fdivrp st1, st0");
    __asm__("fxam ");
    __asm__("wait ");
    __asm__("fstp st0");
    fun_8049040("FXAM(nan):   should=0x0100 is=0x%04x\n", static_cast<uint32_t>(reinterpret_cast<uint16_t>(fpu_status_word17 & 0x4500)), v18, v19, v20);
    __asm__("fldz ");
    __asm__("fld1 ");
    __asm__("fdivrp st1, st0");
    __asm__("fxam ");
    __asm__("wait ");
    __asm__("fstp st0");
    fun_8049040("FXAM(inf):   should=0x0500 is=0x%04x\n", static_cast<uint32_t>(reinterpret_cast<uint16_t>(fpu_status_word21 & 0x4500)), v22, v23, v24);
    __asm__("fxam ");
    __asm__("wait ");
    fun_8049040("FXAM(empty): should=0x4100 is=0x%04x\n", static_cast<uint32_t>(reinterpret_cast<uint16_t>(fpu_status_word25 & 0x4500)), v26, v27, v28);
    return 0;
}

int32_t FXCH(int32_t a1, uint32_t a2, uint32_t a3, uint32_t a4) {
    uint32_t v5;
    uint32_t v6;
    uint32_t v7;
    uint32_t v8;
    uint32_t v9;
    uint32_t v10;
    uint32_t v11;
    uint32_t v12;

    __asm__("fld qword [esp+0x2c]");
    __asm__("fldlpi ");
    __asm__("fldz ");
    __asm__("fxch st0, st1");
    __asm__("fxch st0, st2");
    __asm__("fst qword [esp+0x8]");
    __asm__("fstp qword [esp]");
    __asm__("fstp st0");
    __asm__("fstp st0");
    fun_8049040("FXCH(para):  should=                             is=%12f/%15e\n", v5, v6, v7, v8);
    __asm__("fldlpi ");
    __asm__("fld1 ");
    __asm__("fxch st0, st1");
    __asm__("fst qword [esp+0x8]");
    __asm__("fstp qword [esp]");
    __asm__("fstp st0");
    fun_8049040("FXCH(pi):    should=    3.141593/   3.141593e+00 is=%12f/%15e\n", v9, v10, v11, v12);
    return 0;
}

int32_t FXTRACT(int32_t a1, uint32_t a2, uint32_t a3, uint32_t a4) {
    uint32_t v5;
    uint32_t v6;
    uint32_t v7;
    uint32_t v8;
    uint32_t v9;
    uint32_t v10;
    uint32_t v11;
    uint32_t v12;
    uint32_t v13;
    uint32_t v14;
    uint32_t v15;
    uint32_t v16;
    uint32_t v17;
    uint32_t v18;
    uint32_t v19;
    uint32_t v20;

    __asm__("fld qword [esp+0x2c]");
    __asm__("fpxtract ");
    __asm__("fst qword [esp+0x8]");
    __asm__("fstp qword [esp]");
    __asm__("fstp st0");
    fun_8049040("FXTRACT(para)[0=signi]:  should=                             is=%12f/%15e\n", v5, v6, v7, v8);
    __asm__("fld qword [esp+0x2c]");
    __asm__("fpxtract ");
    __asm__("fstp st0");
    __asm__("fst qword [esp+0x8]");
    __asm__("fstp qword [esp]");
    fun_8049040("FXTRACT(para)[1=exp]:    should=                             is=%12f/%15e\n", v9, v10, v11, v12);
    __asm__("fld qword [0x804e438]");
    __asm__("fpxtract ");
    __asm__("fst qword [esp+0x8]");
    __asm__("fstp qword [esp]");
    __asm__("fstp st0");
    fun_8049040("FXTRACT(12.34)[0=signi]: should=    1.542500/   1.542500e+00 is=%12f/%15e\n", v13, v14, v15, v16);
    __asm__("fld qword [0x804e438]");
    __asm__("fpxtract ");
    __asm__("fstp st0");
    __asm__("fst qword [esp+0x8]");
    __asm__("fstp qword [esp]");
    fun_8049040("FXTRACT(12.34)[1=exp]:   should=    3.000000/   3.000000e+00 is=%12f/%15e\n", v17, v18, v19, v20);
    return 0;
}

int32_t FYL2X(int32_t a1, uint32_t a2, uint32_t a3, uint32_t a4) {
    uint32_t v5;
    uint32_t v6;
    uint32_t v7;
    uint32_t v8;
    uint32_t v9;
    uint32_t v10;
    uint32_t v11;
    uint32_t v12;
    uint32_t v13;
    uint32_t v14;
    uint32_t v15;
    uint32_t v16;
    uint32_t v17;
    uint32_t v18;
    uint32_t v19;
    uint32_t v20;

    __asm__("fld1 ");
    __asm__("fld qword [esp+0x2c]");
    __asm__("fyl2x ");
    __asm__("fst qword [esp+0x8]");
    __asm__("fstp qword [esp]");
    fun_8049040("FYL2X(para, base=2):  should=                             is=%12f/%15e\n", v5, v6, v7, v8);
    __asm__("fld1 ");
    __asm__("fild word [0x804c3d4]");
    __asm__("fyl2x ");
    __asm__("fst qword [esp+0x8]");
    __asm__("fstp qword [esp]");
    fun_8049040("FYL2X(1000, base=2):  should=    9.965784/   9.965784e+00 is=%12f/%15e\n", v9, v10, v11, v12);
    __asm__("fldln2 ");
    __asm__("fild word [0x804c3d4]");
    __asm__("fyl2x ");
    __asm__("fst qword [esp+0x8]");
    __asm__("fstp qword [esp]");
    fun_8049040("FYL2X(1000, base=e):  should=    6.907755/   6.907755e+00 is=%12f/%15e\n", v13, v14, v15, v16);
    __asm__("fldlg2 ");
    __asm__("fild word [0x804c3d4]");
    __asm__("fyl2x ");
    __asm__("fst qword [esp+0x8]");
    __asm__("fstp qword [esp]");
    fun_8049040("FYL2X(1000, base=10): should=    3.000000/   3.000000e+00 is=%12f/%15e\n", v17, v18, v19, v20);
    return 0;
}

int32_t FYL2XP1(int32_t a1, uint32_t a2, uint32_t a3, uint32_t a4) {
    uint32_t v5;
    uint32_t v6;
    uint32_t v7;
    uint32_t v8;
    uint32_t v9;
    uint32_t v10;
    uint32_t v11;
    uint32_t v12;
    uint32_t v13;
    uint32_t v14;
    uint32_t v15;
    uint32_t v16;
    uint32_t v17;
    uint32_t v18;
    uint32_t v19;
    uint32_t v20;

    __asm__("fld1 ");
    __asm__("fld qword [esp+0x2c]");
    __asm__("fyl2xp1 ");
    __asm__("fst qword [esp+0x8]");
    __asm__("fstp qword [esp]");
    fun_8049040("FYL2XP1(para, base=2): should=                             is=%12f/%15e\n", v5, v6, v7, v8);
    __asm__("fld1 ");
    __asm__("fild word [0x804e688]");
    __asm__("fyl2xp1 ");
    __asm__("fst qword [esp+0x8]");
    __asm__("fstp qword [esp]");
    fun_8049040("FYL2XP1(999, base=2):  should=    9.965784/   9.965784e+00 is=%12f/%15e\n", v9, v10, v11, v12);
    __asm__("fldln2 ");
    __asm__("fild word [0x804e688]");
    __asm__("fyl2xp1 ");
    __asm__("fst qword [esp+0x8]");
    __asm__("fstp qword [esp]");
    fun_8049040("FYL2XP1(999, base=e):  should=    6.907755/   6.907755e+00 is=%12f/%15e\n", v13, v14, v15, v16);
    __asm__("fldlg2 ");
    __asm__("fild word [0x804e688]");
    __asm__("fyl2xp1 ");
    __asm__("fst qword [esp+0x8]");
    __asm__("fstp qword [esp]");
    fun_8049040("FYL2XP1(999, base=10): should=    3.000000/   3.000000e+00 is=%12f/%15e\n", v17, v18, v19, v20);
    return 0;
}

void fun_8049002() {
    uint48_t v1;
    int16_t ds2;
    int32_t eax3;
    int32_t ebx4;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int16_t*>(&v1) = ds2;
    __asm__("sti ");
    __x86_get_pc_thunk_bx();
    eax3 = *reinterpret_cast<int32_t*>(ebx4 + 0x6ff3 - 4);
    if (eax3) {
        eax3();
    }
    goto *reinterpret_cast<int32_t*>(&v1);
}

int32_t main(int32_t a1);

void fun_8049092() {
    uint48_t v1;
    int16_t ds2;
    void* esp3;
    void** v4;
    int32_t edx5;
    int32_t eax6;
    int32_t ebx7;
    int32_t ebx8;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int16_t*>(&v1) = ds2;
    __asm__("sti ");
    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 2 + 4);
    v4 = reinterpret_cast<void**>((reinterpret_cast<uint32_t>(esp3) & 0xfffffff0) - 4 - 4);
    fun_80490c7(edx5, v4, eax6);
    ebx7 = ebx8 + 0x6f5c;
    fun_8049060(main, *reinterpret_cast<int16_t*>(&v1), esp3, ebx7 - 0x48e0, ebx7 - 0x4880, edx5, v4, eax6);
    __asm__("hlt ");
}

void fun_80490d2() {
    uint48_t v1;
    int16_t ds2;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int16_t*>(&v1) = ds2;
    __asm__("sti ");
    goto *reinterpret_cast<int16_t*>(&v1);
}

signed char __TMC_END__ = 0;

void fun_8049172() {
    uint48_t v1;
    int16_t ds2;
    int1_t zf3;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int16_t*>(&v1) = ds2;
    __asm__("sti ");
    zf3 = __TMC_END__ == 0;
    if (!zf3) {
        goto *reinterpret_cast<int16_t*>(&v1);
    } else {
        deregister_tm_clones();
        __TMC_END__ = 1;
        goto *reinterpret_cast<int16_t*>(&v1);
    }
}

void fun_80491a2() {
    uint48_t v1;
    int16_t ds2;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int16_t*>(&v1) = ds2;
    __asm__("sti ");
    if (1 || 1) {
        goto *reinterpret_cast<int16_t*>(&v1);
    } else {
        __assert_fail(0x8050024, 0);
        goto *reinterpret_cast<int16_t*>(&v1);
    }
}

void fun_804b6e5() {
    fun_8049050("before FXSAVE", __return_address());
}

int32_t fun_804b6f9() {
    return 0;
}

void _init();

void fun_804b722() {
    uint64_t v1;
    int16_t ds2;
    int32_t ebx3;
    int32_t ebx4;
    int32_t ebp5;
    int32_t v6;
    int32_t esi7;
    int32_t edi8;
    int32_t esi9;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int16_t*>(&v1) = ds2;
    __asm__("sti ");
    __x86_get_pc_thunk_bx();
    ebx3 = ebx4 + 0x48d3;
    ebp5 = v6;
    _init();
    esi7 = ebx3 - 0xf0 - (ebx3 - 0xf4) >> 2;
    if (esi7) {
        edi8 = 0;
        esi9 = esi7;
        do {
            *reinterpret_cast<int32_t*>(ebx3 + edi8 * 4 - 0xf4)(*reinterpret_cast<int32_t*>(&v1), *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 4), ebp5, 0x804b73f);
            ++edi8;
        } while (esi9 != edi8);
    }
    goto *reinterpret_cast<int32_t*>(&v1);
}

void fun_804b782() {
    uint48_t v1;
    int16_t ds2;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int16_t*>(&v1) = ds2;
    __asm__("sti ");
    goto *reinterpret_cast<int16_t*>(&v1);
}

void fun_804b78a() {
    uint48_t v1;
    int16_t ds2;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int16_t*>(&v1) = ds2;
    __asm__("sti ");
    __x86_get_pc_thunk_bx();
    goto *reinterpret_cast<int32_t*>(&v1);
}

void fun_804903c() {
    signed char* eax1;
    signed char* eax2;
    signed char al3;
    signed char* eax4;
    signed char* eax5;
    signed char al6;

    *eax1 = reinterpret_cast<signed char>(*eax2 + al3);
    *eax4 = reinterpret_cast<signed char>(*eax5 + al6);
}

void fun_8049117() {
}

void fun_8049164() {
}

void fun_8049191() {
}

int32_t main(int32_t a1) {
    uint32_t v2;
    uint32_t eax3;
    uint32_t v4;
    uint32_t v5;
    uint32_t v6;
    uint32_t v7;
    uint32_t v8;
    uint32_t eax9;
    uint32_t v10;
    uint32_t v11;
    uint32_t eax12;
    uint32_t v13;
    uint32_t v14;
    uint32_t eax15;
    uint32_t v16;
    uint32_t v17;
    uint32_t eax18;
    uint32_t v19;
    uint32_t v20;
    uint32_t eax21;
    uint32_t v22;
    uint32_t v23;
    uint32_t eax24;
    uint32_t v25;
    uint32_t v26;
    uint32_t eax27;
    uint32_t v28;
    uint32_t v29;
    uint32_t eax30;
    uint32_t v31;
    uint32_t v32;
    uint32_t eax33;
    uint32_t v34;
    uint32_t v35;
    uint32_t eax36;
    uint32_t v37;
    uint32_t v38;
    uint32_t eax39;
    uint32_t v40;
    uint32_t v41;
    uint32_t eax42;
    uint32_t v43;
    uint32_t v44;
    uint32_t eax45;
    uint32_t v46;
    uint32_t v47;
    uint32_t eax48;
    uint32_t v49;
    uint32_t v50;
    uint32_t eax51;
    uint32_t v52;
    uint32_t v53;
    uint32_t eax54;
    uint32_t v55;
    uint32_t v56;
    uint32_t eax57;
    uint32_t v58;
    uint32_t v59;
    uint32_t eax60;
    uint32_t v61;
    uint32_t v62;
    uint32_t eax63;
    uint32_t v64;
    uint32_t v65;
    uint32_t eax66;
    uint32_t v67;
    uint32_t v68;
    uint32_t eax69;
    uint32_t v70;
    uint32_t v71;
    uint32_t eax72;
    uint32_t v73;
    uint32_t v74;
    uint32_t eax75;
    uint32_t v76;
    uint32_t v77;
    uint32_t eax78;
    uint32_t v79;
    uint32_t v80;
    uint32_t eax81;
    uint32_t v82;
    uint32_t v83;
    uint32_t eax84;
    uint32_t v85;
    uint32_t v86;
    uint32_t eax87;
    uint32_t v88;
    uint32_t v89;
    uint32_t eax90;
    uint32_t v91;
    uint32_t v92;
    uint32_t eax93;
    uint32_t v94;
    uint32_t v95;
    uint32_t eax96;
    uint32_t v97;
    uint32_t v98;
    uint32_t eax99;
    uint32_t v100;
    uint32_t v101;
    uint32_t eax102;
    uint32_t v103;
    uint32_t v104;
    uint32_t eax105;
    uint32_t v106;

    __asm__("fld qword [0x804c030]");
    __asm__("fstp qword [esp]");
    F2XM1();
    v2 = 0x80491da;
    eax3 = TOP();
    if (eax3 && (v4 = eax3, fun_8049040("top=%d\n", v4, v5, 0x80491da, v6), !!eax3)) {
        v2 = reinterpret_cast<uint32_t>("main");
        v7 = 48;
        v4 = reinterpret_cast<uint32_t>("source.c");
        fun_8049080("top==0", "source.c", 48, "main");
    }
    fun_8049070(10, v4, 48, v2);
    __asm__("fld qword [0x804c030]");
    __asm__("fstp qword [esp]");
    FABS(10, v4, 48, v2);
    v8 = 0x804923c;
    eax9 = TOP();
    if (eax9 && (v4 = eax9, fun_8049040("top=%d\n", v4, 48, 0x804923c, v10), !!eax9)) {
        v8 = reinterpret_cast<uint32_t>("main");
        v7 = 52;
        v4 = reinterpret_cast<uint32_t>("source.c");
        fun_8049080("top==0", "source.c", 52, "main");
    }
    fun_8049070(10, v4, v7, v8);
    __asm__("fld qword [0x804c030]");
    __asm__("fstp qword [esp]");
    FADD(10, v4, v7, v8);
    v11 = 0x804929e;
    eax12 = TOP();
    if (eax12 && (v4 = eax12, fun_8049040("top=%d\n", v4, v7, 0x804929e, v13), !!eax12)) {
        v11 = reinterpret_cast<uint32_t>("main");
        v7 = 56;
        v4 = reinterpret_cast<uint32_t>("source.c");
        fun_8049080("top==0", "source.c", 56, "main");
    }
    fun_8049070(10, v4, v7, v11);
    FBSTP();
    v14 = 0x80492ed;
    eax15 = TOP();
    if (eax15 && (v4 = eax15, fun_8049040("top=%d\n", v4, v7, 0x80492ed, v16), !!eax15)) {
        v14 = reinterpret_cast<uint32_t>("main");
        v7 = 60;
        v4 = reinterpret_cast<uint32_t>("source.c");
        fun_8049080("top==0", "source.c", 60, "main");
    }
    fun_8049070(10, v4, v7, v14);
    FBLD();
    v17 = 0x804933c;
    eax18 = TOP();
    if (eax18 && (v4 = eax18, fun_8049040("top=%d\n", v4, v7, 0x804933c, v19), !!eax18)) {
        v17 = reinterpret_cast<uint32_t>("main");
        v7 = 64;
        v4 = reinterpret_cast<uint32_t>("source.c");
        fun_8049080("top==0", "source.c", 64, "main");
    }
    fun_8049070(10, v4, v7, v17);
    __asm__("fld qword [0x804c038]");
    __asm__("fstp qword [esp]");
    FCHS(10, v4, v7, v17);
    v20 = 0x804939e;
    eax21 = TOP();
    if (eax21 && (v4 = eax21, fun_8049040("top=%d\n", v4, v7, 0x804939e, v22), !!eax21)) {
        v20 = reinterpret_cast<uint32_t>("main");
        v7 = 68;
        v4 = reinterpret_cast<uint32_t>("source.c");
        fun_8049080("top==0", "source.c", 68, "main");
    }
    fun_8049070(10, v4, v7, v20);
    FCMOV(0, v4, v7, v20);
    v23 = 0x80493f5;
    eax24 = TOP();
    if (eax24 && (v4 = eax24, fun_8049040("top=%d\n", v4, v7, 0x80493f5, v25), !!eax24)) {
        v23 = reinterpret_cast<uint32_t>("main");
        v7 = 72;
        v4 = reinterpret_cast<uint32_t>("source.c");
        fun_8049080("top==0", "source.c", 72, "main");
    }
    FCMOV(0xff, v4, v7, v23);
    v26 = 0x804943f;
    eax27 = TOP();
    if (eax27 && (v4 = eax27, fun_8049040("top=%d\n", v4, v7, 0x804943f, v28), !!eax27)) {
        v26 = reinterpret_cast<uint32_t>("main");
        v7 = 74;
        v4 = reinterpret_cast<uint32_t>("source.c");
        fun_8049080("top==0", "source.c", 74, "main");
    }
    fun_8049070(10, v4, v7, v26);
    __asm__("fld qword [0x804c030]");
    __asm__("fstp qword [esp]");
    FCOM(10, v4, v7, v26);
    v29 = 0x80494a1;
    eax30 = TOP();
    if (eax30 && (v4 = eax30, fun_8049040("top=%d\n", v4, v7, 0x80494a1, v31), !!eax30)) {
        v29 = reinterpret_cast<uint32_t>("main");
        v7 = 78;
        v4 = reinterpret_cast<uint32_t>("source.c");
        fun_8049080("top==0", "source.c", 78, "main");
    }
    fun_8049070(10, v4, v7, v29);
    __asm__("fld qword [0x804c030]");
    __asm__("fstp qword [esp]");
    FCOMI(10, v4, v7, v29);
    v32 = 0x8049503;
    eax33 = TOP();
    if (eax33 && (v4 = eax33, fun_8049040("top=%d\n", v4, v7, 0x8049503, v34), !!eax33)) {
        v32 = reinterpret_cast<uint32_t>("main");
        v7 = 82;
        v4 = reinterpret_cast<uint32_t>("source.c");
        fun_8049080("top==0", "source.c", 82, "main");
    }
    fun_8049070(10, v4, v7, v32);
    __asm__("fld qword [0x804c030]");
    __asm__("fstp qword [esp]");
    FCOS(10, v4, v7, v32);
    v35 = 0x8049565;
    eax36 = TOP();
    if (eax36 && (v4 = eax36, fun_8049040("top=%d\n", v4, v7, 0x8049565, v37), !!eax36)) {
        v35 = reinterpret_cast<uint32_t>("main");
        v7 = 86;
        v4 = reinterpret_cast<uint32_t>("source.c");
        fun_8049080("top==0", "source.c", 86, "main");
    }
    fun_8049070(10, v4, v7, v35);
    __asm__("fld qword [0x804c030]");
    __asm__("fstp qword [esp]");
    FDIV(10, v4, v7, v35);
    v38 = 0x80495c7;
    eax39 = TOP();
    if (eax39 && (v4 = eax39, fun_8049040("top=%d\n", v4, v7, 0x80495c7, v40), !!eax39)) {
        v38 = reinterpret_cast<uint32_t>("main");
        v7 = 90;
        v4 = reinterpret_cast<uint32_t>("source.c");
        fun_8049080("top==0", "source.c", 90, "main");
    }
    fun_8049070(10, v4, v7, v38);
    __asm__("fld qword [0x804c030]");
    __asm__("fstp qword [esp]");
    FDIVR(10, v4, v7, v38);
    v41 = 0x8049629;
    eax42 = TOP();
    if (eax42 && (v4 = eax42, fun_8049040("top=%d\n", v4, v7, 0x8049629, v43), !!eax42)) {
        v41 = reinterpret_cast<uint32_t>("main");
        v7 = 94;
        v4 = reinterpret_cast<uint32_t>("source.c");
        fun_8049080("top==0", "source.c", 94, "main");
    }
    fun_8049070(10, v4, v7, v41);
    FILD();
    v44 = 0x8049678;
    eax45 = TOP();
    if (eax45 && (v4 = eax45, fun_8049040("top=%d\n", v4, v7, 0x8049678, v46), !!eax45)) {
        v44 = reinterpret_cast<uint32_t>("main");
        v7 = 98;
        v4 = reinterpret_cast<uint32_t>("source.c");
        fun_8049080("top==0", "source.c", 98, "main");
    }
    fun_8049070(10, v4, v7, v44);
    __asm__("fld qword [0x804c040]");
    __asm__("fstp qword [esp]");
    FIST(10, v4, v7, v44);
    v47 = 0x80496da;
    eax48 = TOP();
    if (eax48 && (v4 = eax48, fun_8049040("top=%d\n", v4, v7, 0x80496da, v49), !!eax48)) {
        v47 = reinterpret_cast<uint32_t>("main");
        v7 = 0x66;
        v4 = reinterpret_cast<uint32_t>("source.c");
        fun_8049080("top==0", "source.c", 0x66, "main");
    }
    fun_8049070(10, v4, v7, v47);
    FLD();
    v50 = 0x8049729;
    eax51 = TOP();
    if (eax51 && (v4 = eax51, fun_8049040("top=%d\n", v4, v7, 0x8049729, v52), !!eax51)) {
        v50 = reinterpret_cast<uint32_t>("main");
        v7 = 0x6a;
        v4 = reinterpret_cast<uint32_t>("source.c");
        fun_8049080("top==0", "source.c", 0x6a, "main");
    }
    fun_8049070(10, v4, v7, v50);
    FLDC();
    v53 = 0x8049778;
    eax54 = TOP();
    if (eax54 && (v4 = eax54, fun_8049040("top=%d\n", v4, v7, 0x8049778, v55), !!eax54)) {
        v53 = reinterpret_cast<uint32_t>("main");
        v7 = 0x6e;
        v4 = reinterpret_cast<uint32_t>("source.c");
        fun_8049080("top==0", "source.c", 0x6e, "main");
    }
    fun_8049070(10, v4, v7, v53);
    __asm__("fld qword [0x804c030]");
    __asm__("fstp qword [esp]");
    FMUL(10, v4, v7, v53);
    v56 = 0x80497da;
    eax57 = TOP();
    if (eax57 && (v4 = eax57, fun_8049040("top=%d\n", v4, v7, 0x80497da, v58), !!eax57)) {
        v56 = reinterpret_cast<uint32_t>("main");
        v7 = 0x72;
        v4 = reinterpret_cast<uint32_t>("source.c");
        fun_8049080("top==0", "source.c", 0x72, "main");
    }
    fun_8049070(10, v4, v7, v56);
    __asm__("fld qword [0x804c030]");
    __asm__("fstp qword [esp]");
    FPATAN(10, v4, v7, v56);
    v59 = 0x804983c;
    eax60 = TOP();
    if (eax60 && (v4 = eax60, fun_8049040("top=%d\n", v4, v7, 0x804983c, v61), !!eax60)) {
        v59 = reinterpret_cast<uint32_t>("main");
        v7 = 0x76;
        v4 = reinterpret_cast<uint32_t>("source.c");
        fun_8049080("top==0", "source.c", 0x76, "main");
    }
    fun_8049070(10, v4, v7, v59);
    __asm__("fld qword [0x804c048]");
    __asm__("fstp qword [esp]");
    FPREM(10, v4, v7, v59);
    v62 = 0x804989e;
    eax63 = TOP();
    if (eax63 && (v4 = eax63, fun_8049040("top=%d\n", v4, v7, 0x804989e, v64), !!eax63)) {
        v62 = reinterpret_cast<uint32_t>("main");
        v7 = 0x7a;
        v4 = reinterpret_cast<uint32_t>("source.c");
        fun_8049080("top==0", "source.c", 0x7a, "main");
    }
    fun_8049070(10, v4, v7, v62);
    __asm__("fld qword [0x804c030]");
    __asm__("fstp qword [esp]");
    FPTAN(10, v4, v7, v62);
    v65 = 0x8049900;
    eax66 = TOP();
    if (eax66 && (v4 = eax66, fun_8049040("top=%d\n", v4, v7, 0x8049900, v67), !!eax66)) {
        v65 = reinterpret_cast<uint32_t>("main");
        v7 = 0x7e;
        v4 = reinterpret_cast<uint32_t>("source.c");
        fun_8049080("top==0", "source.c", 0x7e, "main");
    }
    fun_8049070(10, v4, v7, v65);
    __asm__("fld qword [0x804c050]");
    __asm__("fstp qword [esp]");
    FRNDINT(10, v4, v7, v65);
    v68 = 0x8049962;
    eax69 = TOP();
    if (eax69 && (v4 = eax69, fun_8049040("top=%d\n", v4, v7, 0x8049962, v70), !!eax69)) {
        v68 = reinterpret_cast<uint32_t>("main");
        v7 = 0x82;
        v4 = reinterpret_cast<uint32_t>("source.c");
        fun_8049080("top==0", "source.c", 0x82, "main");
    }
    fun_8049070(10, v4, v7, v68);
    __asm__("fld qword [0x804c058]");
    __asm__("fstp qword [esp]");
    FSCALE(10, v4, v7, v68);
    v71 = 0x80499c7;
    eax72 = TOP();
    if (eax72 && (v4 = eax72, fun_8049040("top=%d\n", v4, v7, 0x80499c7, v73), !!eax72)) {
        v71 = reinterpret_cast<uint32_t>("main");
        v7 = 0x86;
        v4 = reinterpret_cast<uint32_t>("source.c");
        fun_8049080("top==0", "source.c", 0x86, "main");
    }
    fun_8049070(10, v4, v7, v71);
    __asm__("fld qword [0x804c030]");
    __asm__("fstp qword [esp]");
    FSIN(10, v4, v7, v71);
    v74 = 0x8049a2c;
    eax75 = TOP();
    if (eax75 && (v4 = eax75, fun_8049040("top=%d\n", v4, v7, 0x8049a2c, v76), !!eax75)) {
        v74 = reinterpret_cast<uint32_t>("main");
        v7 = 0x8a;
        v4 = reinterpret_cast<uint32_t>("source.c");
        fun_8049080("top==0", "source.c", 0x8a, "main");
    }
    fun_8049070(10, v4, v7, v74);
    __asm__("fld qword [0x804c030]");
    __asm__("fstp qword [esp]");
    FSINCOS(10, v4, v7, v74);
    v77 = 0x8049a91;
    eax78 = TOP();
    if (eax78 && (v4 = eax78, fun_8049040("top=%d\n", v4, v7, 0x8049a91, v79), !!eax78)) {
        v77 = reinterpret_cast<uint32_t>("main");
        v7 = 0x8e;
        v4 = reinterpret_cast<uint32_t>("source.c");
        fun_8049080("top==0", "source.c", 0x8e, "main");
    }
    fun_8049070(10, v4, v7, v77);
    __asm__("fld qword [0x804c060]");
    __asm__("fstp qword [esp]");
    FSQRT(10, v4, v7, v77);
    v80 = 0x8049af6;
    eax81 = TOP();
    if (eax81 && (v4 = eax81, fun_8049040("top=%d\n", v4, v7, 0x8049af6, v82), !!eax81)) {
        v80 = reinterpret_cast<uint32_t>("main");
        v7 = 0x92;
        v4 = reinterpret_cast<uint32_t>("source.c");
        fun_8049080("top==0", "source.c", 0x92, "main");
    }
    fun_8049070(10, v4, v7, v80);
    __asm__("fld qword [0x804c030]");
    __asm__("fstp qword [esp]");
    FST(10, v4, v7, v80);
    v83 = 0x8049b5b;
    eax84 = TOP();
    if (eax84 && (v4 = eax84, fun_8049040("top=%d\n", v4, v7, 0x8049b5b, v85), !!eax84)) {
        v83 = reinterpret_cast<uint32_t>("main");
        v7 = 0x96;
        v4 = reinterpret_cast<uint32_t>("source.c");
        fun_8049080("top==0", "source.c", 0x96, "main");
    }
    fun_8049070(10, v4, v7, v83);
    __asm__("fld qword [0x804c050]");
    __asm__("fstp qword [esp]");
    FSUB(10, v4, v7, v83);
    v86 = 0x8049bc0;
    eax87 = TOP();
    if (eax87 && (v4 = eax87, fun_8049040("top=%d\n", v4, v7, 0x8049bc0, v88), !!eax87)) {
        v86 = reinterpret_cast<uint32_t>("main");
        v7 = 0x9a;
        v4 = reinterpret_cast<uint32_t>("source.c");
        fun_8049080("top==0", "source.c", 0x9a, "main");
    }
    fun_8049070(10, v4, v7, v86);
    __asm__("fld qword [0x804c068]");
    __asm__("fstp qword [esp]");
    FTST(10, v4, v7, v86);
    v89 = 0x8049c25;
    eax90 = TOP();
    if (eax90 && (v4 = eax90, fun_8049040("top=%d\n", v4, v7, 0x8049c25, v91), !!eax90)) {
        v89 = reinterpret_cast<uint32_t>("main");
        v7 = 0x9e;
        v4 = reinterpret_cast<uint32_t>("source.c");
        fun_8049080("top==0", "source.c", 0x9e, "main");
    }
    fun_8049070(10, v4, v7, v89);
    __asm__("fld qword [0x804c030]");
    __asm__("fstp qword [esp]");
    FXAM(10, v4, v7, v89);
    v92 = 0x8049c8a;
    eax93 = TOP();
    if (eax93 && (v4 = eax93, fun_8049040("top=%d\n", v4, v7, 0x8049c8a, v94), !!eax93)) {
        v92 = reinterpret_cast<uint32_t>("main");
        v7 = 0xa2;
        v4 = reinterpret_cast<uint32_t>("source.c");
        fun_8049080("top==0", "source.c", 0xa2, "main");
    }
    fun_8049070(10, v4, v7, v92);
    __asm__("fld qword [0x804c030]");
    __asm__("fstp qword [esp]");
    FXCH(10, v4, v7, v92);
    v95 = 0x8049cef;
    eax96 = TOP();
    if (eax96 && (v4 = eax96, fun_8049040("top=%d\n", v4, v7, 0x8049cef, v97), !!eax96)) {
        v95 = reinterpret_cast<uint32_t>("main");
        v7 = 0xa6;
        v4 = reinterpret_cast<uint32_t>("source.c");
        fun_8049080("top==0", "source.c", 0xa6, "main");
    }
    fun_8049070(10, v4, v7, v95);
    __asm__("fld qword [0x804c030]");
    __asm__("fstp qword [esp]");
    FXTRACT(10, v4, v7, v95);
    v98 = 0x8049d60;
    eax99 = TOP();
    if (eax99 && (v4 = eax99, fun_8049040("top=%d\n", v4, v7, 0x8049d60, v100), !!eax99)) {
        v98 = reinterpret_cast<uint32_t>("main");
        v7 = 0xaa;
        v4 = reinterpret_cast<uint32_t>("source.c");
        fun_8049080("top==0", "source.c", 0xaa, "main");
    }
    fun_8049070(10, v4, v7, v98);
    __asm__("fld qword [0x804c070]");
    __asm__("fstp qword [esp]");
    FYL2X(10, v4, v7, v98);
    v101 = 0x8049dd1;
    eax102 = TOP();
    if (eax102 && (v4 = eax102, fun_8049040("top=%d\n", v4, v7, 0x8049dd1, v103), !!eax102)) {
        v101 = reinterpret_cast<uint32_t>("main");
        v7 = 0xae;
        v4 = reinterpret_cast<uint32_t>("source.c");
        fun_8049080("top==0", "source.c", 0xae, "main");
    }
    fun_8049070(10, v4, v7, v101);
    __asm__("fld qword [0x804c078]");
    __asm__("fstp qword [esp]");
    FYL2XP1(10, v4, v7, v101);
    v104 = 0x8049e42;
    eax105 = TOP();
    if (eax105 && (v4 = eax105, fun_8049040("top=%d\n", v4, v7, 0x8049e42, v106), !!eax105)) {
        v104 = reinterpret_cast<uint32_t>("main");
        v7 = 0xb2;
        v4 = reinterpret_cast<uint32_t>("source.c");
        fun_8049080("top==0", "source.c", 0xb2, "main");
    }
    fun_8049070(10, v4, v7, v104);
    if (a1 == 42) {
        NOT_EXECUTED();
    }
    return 0;
}

void fun_804b77d() {
}

int32_t g8050008 = 0;

void fun_8049066() {
    goto g8050008;
}

void fun_8049121() {
}

void fun_8049169() {
}

void fun_8049199() {
}

void fun_8049046() {
    goto 0x8049030;
}

void fun_8049086() {
    goto 0x8049030;
}

void fun_8049056() {
    goto 0x8049030;
}

void fun_8049076() {
    goto 0x8049030;
}

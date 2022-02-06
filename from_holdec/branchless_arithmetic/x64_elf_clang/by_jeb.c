
long abs32(unsigned int param0) {
    return (int)((unsigned int)(0 - param0) & param0) < 0 == (int)param0 > 0 ? (unsigned long)(unsigned int)(0 - param0): (unsigned long)param0;
}

unsigned long abs64(unsigned long param0) {
    return (long)((unsigned long)(0L - param0) & param0) < 0L == (long)param0 > 0L ? (unsigned long)(0L - param0): param0;
}

long main() {
    long v0 = sat_addu32b(0xffffffffL, 3L);
    →printf("sat_addu32b(0x%08x,0x%08x) = 0x%08x\n");
    long v1 = sat_subu32b(1, 3);
    →printf("sat_subu32b(0x%08x,0x%08x) = 0x%08x\n");
    long v2 = sat_mulu32b(0xffffffffL, 3L);
    →printf("sat_mulu32b(0x%08x,0x%08x) = 0x%08x\n");
    long v3 = sat_divu32b(0xffffffff, 3);
    →printf("sat_divu32b(0x%08x,0x%08x) = 0x%08x\n");
    long v4 = sat_adds32b_var1(0x7fffffffL, 2L);
    long v5 = sat_adds32b_var2(0x7fffffffL, 2L);
    long v6 = sat_adds32b_var3(0x7fffffffL, 2L);
    →printf("sat_adds32b(0x%08x,0x%08x) = 0x%08x 0x%08x 0x%08x\n");
    long v7 = sat_subs32b(0x80000000, 2);
    →printf("sat_subs32b(0x%08x,0x%08x) = 0x%08x\n");
    long v8 = sat_muls32b(0x7fffffffL, 2L);
    →printf("sat_muls32b(0x%08x,0x%08x) = 0x%08x\n");
    int v9 = sat_divs32b(0x80000000L, 0xffffffffL);
    →printf("sat_divs32b(0x%08x,0x%08x) = 0x%08x\n");
    long v10 = abs32(0xfffffff0);
    →printf("abs32(0x%08x) = 0x%08x\n");
    int v11 = sgn32(3L);
    →printf("sgn32(0x%08x) = 0x%08x\n");
    long v12 = sat_addu64b(0L, 0L);
    unsigned long v13 = /*BAD_CALL!*/ sat_subu64b(0L, 0L);
    unsigned long v14 = /*BAD_CALL!*/ sat_divu64b(0L, 1L);
    long v15 = /*BAD_CALL!*/ sat_mulu64b(0L, 0L);
    long v16 = /*BAD_CALL!*/ sat_muls64b(0L, 0L);
    long v17 = /*BAD_CALL!*/ sat_adds64b(0L, 0L);
    unsigned long v18 = /*BAD_CALL!*/ sat_subs64b(0L, 0L);
    long v19 = /*BAD_CALL!*/ sat_divs64b(0L, 1L);
    unsigned long v20 = /*BAD_CALL!*/ abs64(0L);
    long v21 = sgn64(0L);
    if((unsigned long)(v13 + v14 + (v15 + v16) + (v17 + v18 + (v19 + v20)) + (v21 + v12)) == 42L) {
        →puts("not reached");
    }
    return 0L;
}

long sat_adds32b_var1(int param0, int param1) {
    int v0 = param1 + param0;
    return ((param0 ^ v0) & ~(param1 ^ param0)) >= 0 ? (unsigned long)v0: param1 + param0 < 0 ? 0x7fffffffL: 0x80000000L;
}

long sat_adds32b_var2(long param0, long param1) {
    int v0 = (unsigned int)param1 + (unsigned int)param0;
    return ((unsigned int)param1 ^ (unsigned int)param0) < 0 ? (unsigned long)v0: ((unsigned int)param0 ^ v0) < 0 ? (unsigned long)(0x7fffffff - ((unsigned int)param0 >> 31)): (unsigned long)v0;
}

long sat_adds32b_var3(long param0, long param1) {
    int v0 = (unsigned int)param1 + (unsigned int)param0;
    return (((0x7fffffff - ((unsigned int)param0 >> 31)) ^ (unsigned int)param1) | ~((unsigned int)param1 ^ v0)) >= 0 ? (unsigned long)(0x7fffffff - ((unsigned int)param0 >> 31)): (unsigned long)v0;
}

long sat_adds64b(long param0, long param1) {
    long v0 = param1 + param0;
    return (((0x7fffffffffffffffL - (param0 >> 63)) ^ param1) | ~(v0 ^ param1)) >= 0L ? 0x7fffffffffffffffL - (param0 >> 63): v0;
}

long sat_addu32b(int param0, int param1) {
    return __carry__(param1, param0) ? 0xffffffffL: (unsigned long)(param1 + param0);
}

long sat_addu64b(long param0, long param1) {
    return __carry__(param1, param0) ? -1L: param1 + param0;
}

int sat_divs32b(int param0, int param1) {
    return ((param1 + 1) | (param0 ^ 0x80000000) ? param0: param0 + 1) / param1;
}

long sat_divs64b(long param0, long param1) {
    long v0 = (param1 + 1L) | (param0 ^ 0x8000000000000000L) ? param0: param0 + 1L;
    return (v0 | param1) >>> 32 ? v0 / param1: (unsigned long)((unsigned int)v0 / (unsigned int)param1);
}

long sat_divu32b(unsigned int param0, unsigned int param1) {
    return (unsigned long)(param0 / param1);
}

unsigned long sat_divu64b(unsigned long param0, unsigned long param1) {
    return (param1 | param0) >>> 32 ? param0 / param1: (unsigned long)((unsigned int)param0 / (unsigned int)param1);
}

long sat_muls32b(int param0, int param1) {
    long v0 = (long)param1 * (long)param0;
    return (unsigned int)((unsigned int)v0 >> 31) != (unsigned int)(v0 >>> 32L) ? (unsigned long)(0x7fffffff - ((param1 ^ param0) >> 31)): (unsigned long)(unsigned int)v0;
}

long sat_muls64b(long param0, long param1) {
    long v0 = param1 * param0;
    return (unsigned long)(v0 >> 63) != (unsigned long)(((__int128)param1 * (__int128)param0) >>> 0x40X) ? 0x7fffffffffffffffL - ((param1 ^ param0) >> 63): v0;
}

long sat_mulu32b(int param0, int param1) {
    return (unsigned int)(((unsigned long)param1 * (unsigned long)param0) >>> 32L) ? 0xffffffffL: (unsigned long)(param1 * param0);
}

long sat_mulu64b(long param0, long param1) {
    return (unsigned long)(((unsigned __int128)param1 * (unsigned __int128)param0) >>> 0x40X) ? -1L: param1 * param0;
}

long sat_subs32b(unsigned int param0, unsigned int param1) {
    unsigned int v0 = param0 - param1;
    return (((0x7fffffff - (param0 >> 31)) ^ param1) & ((unsigned int)(0x7fffffff - (param0 >> 31)) ^ v0)) < 0 ? (unsigned long)(unsigned int)(0x7fffffff - (param0 >> 31)): (unsigned long)v0;
}

unsigned long sat_subs64b(unsigned long param0, unsigned long param1) {
    unsigned long v0 = param0 - param1;
    return (long)(((unsigned long)(0x7fffffffffffffffL - (param0 >> 63)) ^ v0) & ((unsigned long)(0x7fffffffffffffffL - (param0 >> 63)) ^ param1)) < 0L ? (unsigned long)(0x7fffffffffffffffL - (param0 >> 63)): v0;
}

long sat_subu32b(unsigned int param0, unsigned int param1) {
    return param1 <= param0 ? (unsigned long)(param0 - param1): 0L;
}

unsigned long sat_subu64b(unsigned long param0, unsigned long param1) {
    return param1 <= param0 ? param0 - param1: 0L;
}

int sgn32(int param0) {
    return (param0 >> 31) + (param0 <= 0 ? 0: 1);
}

long sgn64(long param0) {
    return (param0 >> 63) + (param0 <= 0L ? 0L: 1L);
}

long sub_401026() {
    return gvar_404010();
}

long sub_40109D() {
    return 0L;
}

long sub_4010DF() {
    return 0L;
}

long sub_40110D() {
    long result = deregister_tm_clones();
    completed.0 = 1;
    return result;
}

void sub_401120() {
}


long abs32(unsigned int param0) {
    return (int)param0 <= 0 ? (unsigned long)(unsigned int)(0 - param0): (unsigned long)param0;
}

unsigned long abs64(unsigned long param0) {
    return (long)param0 <= 0L ? (unsigned long)(0L - param0): param0;
}

long main() {
    long v0;
    unsigned long v1;
    long v2;
    long v3 = sat_addu32b(0xffffffffL, 3L);
    →printf("sat_addu32b(0x%08x,0x%08x) = 0x%08x\n");
    long v4 = sat_subu32b(1, 3);
    →printf("sat_subu32b(0x%08x,0x%08x) = 0x%08x\n");
    long v5 = sat_mulu32b(0xffffffffL, 3L);
    →printf("sat_mulu32b(0x%08x,0x%08x) = 0x%08x\n");
    long v6 = sat_divu32b(0xffffffff, 3);
    →printf("sat_divu32b(0x%08x,0x%08x) = 0x%08x\n");
    int v7 = sat_adds32b_var3(0x7fffffffL, 2L);
    int v8 = sat_adds32b_var2(0x7fffffffL, 2L);
    unsigned long v9 = sat_adds32b_var1(v0, 2L);
    →printf("sat_adds32b(0x%08x,0x%08x) = 0x%08x 0x%08x 0x%08x\n");
    long v10 = sat_subs32b(0x80000000L, 2L);
    →printf("sat_subs32b(0x%08x,0x%08x) = 0x%08x\n");
    long v11 = sat_muls32b(0x7fffffffL, 2L);
    →printf("sat_muls32b(0x%08x,0x%08x) = 0x%08x\n");
    int v12 = sat_divs32b(0x80000000L, 0xffffffffL);
    →printf("sat_divs32b(0x%08x,0x%08x) = 0x%08x\n");
    long v13 = abs32(0xfffffff0);
    →printf("abs32(0x%08x) = 0x%08x\n");
    unsigned int v14 = sgn32(3L);
    →printf("sgn32(0x%08x) = 0x%08x\n");
    int v15 = sat_addu64b(0L, 0L);
    int v16 = sat_subu64b(0L, v1);
    unsigned long v17 = sat_divu64b(0L, 1L);
    long v18 = sat_mulu64b(v0, 0L);
    long v19 = sat_muls64b(v0, 0L);
    long v20 = sat_adds64b(0L, (long)v1);
    long v21 = sat_subs64b(0L, 0L);
    long v22 = sat_divs64b(0L, 1L);
    unsigned long v23 = abs64((unsigned long)v0);
    int v24 = sgn64(v0);
    if((unsigned long)(v24 + v2) == 42L) {
        →puts("not reached");
    }
    return 0L;
}

unsigned long sat_adds32b_var1(int param0, int param1) {
    unsigned long v0 = (unsigned long)((long)param1 + (long)param0);
    return (long)((long)v0 <= 0x7fffffffL ? v0: 0x7fffffffL) >= 0xffffffff80000000L ? (long)v0 <= 0x7fffffffL ? v0: 0x7fffffffL: 0xffffffff80000000L;
}

int sat_adds32b_var2(long param0, long param1) {
    int v0 = (unsigned int)param1 + (unsigned int)param0;
    return ((unsigned int)param1 ^ (unsigned int)param0) >= 0 && ((unsigned int)param0 ^ v0) < 0 ? 0x7fffffff - ((unsigned int)param0 >> 31): v0;
}

int sat_adds32b_var3(long param0, long param1) {
    int v0 = (unsigned int)param1 + (unsigned int)param0;
    return (((0x7fffffff - ((unsigned int)param0 >> 31)) ^ (unsigned int)param1) | ~((unsigned int)param1 ^ v0)) >= 0 ? 0x7fffffff - ((unsigned int)param0 >> 31): v0;
}

long sat_adds64b(long param0, long param1) {
    long v0 = param1 + param0;
    return (((0x7fffffffffffffffL - (param0 >> 63)) ^ param1) | ~(v0 ^ param1)) >= 0L ? 0x7fffffffffffffffL - (param0 >> 63): v0;
}

long sat_addu32b(int param0, int param1) {
    return (unsigned long)((param1 + param0) | (__carry__(param1, param0) ? -1: 0));
}

int sat_addu64b(long param0, long param1) {
    return (int)((param1 + param0) | (long)(__carry__(param1, param0) ? 0xffffffff: 0));
}

int sat_divs32b(int param0, int param1) {
    return ((unsigned int)((unsigned int)((param1 + 1) | (param0 + 0x80000000)) < 1) + param0) / param1;
}

long sat_divs64b(long param0, long param1) {
    return ((unsigned long)((unsigned long)((param1 + 1L) | (param0 + 0x8000000000000000L)) < 1L) + param0) / param1;
}

long sat_divu32b(unsigned int param0, unsigned int param1) {
    return (unsigned long)(param0 / param1);
}

unsigned long sat_divu64b(unsigned long param0, unsigned long param1) {
    return param0 / param1;
}

long sat_muls32b(int param0, int param1) {
    long v0 = (long)param1 * (long)param0;
    return (unsigned int)(v0 >>> 32L) != ((v0 >>> 31L) & 0x1L ? 0xffffffff: 0) ? (unsigned long)(0x7fffffff - ((param1 ^ param0) >> 31)): (unsigned long)(unsigned int)v0;
}

long sat_muls64b(long param0, long param1) {
    long v0 = param1 * param0;
    return (unsigned long)(v0 >> 63) != (unsigned long)(((__int128)param1 * (__int128)param0) >>> 0x40X) ? 0x7fffffffffffffffL - ((param1 ^ param0) >> 63): v0;
}

long sat_mulu32b(int param0, int param1) {
    long v0 = (unsigned long)param1 * (unsigned long)param0;
    return (unsigned long)((0 - (v0 >>> 32 ? 1: 0)) | (unsigned int)v0);
}

long sat_mulu64b(long param0, long param1) {
    return (param1 * param0) | (long)((unsigned long)(((unsigned __int128)param1 * (unsigned __int128)param0) >>> 0x40X) > 0L ? 0xffffffff: 0);
}

long sat_subs32b(int param0, int param1) {
    int v0 = param0 - param1;
    return (((0x7fffffff - (param0 >> 31)) ^ v0) & ((0x7fffffff - (param0 >> 31)) ^ param1)) < 0 ? (unsigned long)(0x7fffffff - (param0 >> 31)): (unsigned long)v0;
}

long sat_subs64b(long param0, long param1) {
    long v0 = param0 - param1;
    return (((0x7fffffffffffffffL - (param0 >> 63)) ^ v0) & ((0x7fffffffffffffffL - (param0 >> 63)) ^ param1)) < 0L ? 0x7fffffffffffffffL - (param0 >> 63): v0;
}

long sat_subu32b(unsigned int param0, unsigned int param1) {
    return (unsigned long)((param0 - param1) & (0 - (param1 > param0 ? 0: 1)));
}

int sat_subu64b(unsigned long param0, unsigned long param1) {
    return (int)((param0 - param1) & (long)(0 - (param1 > param0 ? 0: 1)));
}

unsigned int sgn32(int param0) {
    return (param0 <= 0 ? 0: 1) - (unsigned int)(param0 >>> 31);
}

int sgn64(long param0) {
    return (param0 <= 0L ? 0: 1) - (unsigned int)(param0 >>> 63);
}

long sub_401026() {
    return gvar_404010();
}

long sub_4012BD() {
    return 0L;
}

long sub_4012FF() {
    return 0L;
}

long sub_40132D() {
    long result = deregister_tm_clones();
    completed.0 = 1;
    return result;
}

void sub_401340() {
}

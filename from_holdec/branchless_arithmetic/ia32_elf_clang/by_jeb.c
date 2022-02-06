
unsigned int __divdi3(unsigned int param0, unsigned int param1, unsigned int param2, unsigned int param3) {
    int v0;
    unsigned int v1;
    int v2 = 0;
    unsigned int v3 = param2;
    unsigned int v4 = param0;
    unsigned int v5 = param1;
    if(param1 >= 0x80000000) {
        v2 = -1;
        v4 = (unsigned int)(0 - param0);
        v5 = (unsigned int)(0 - (unsigned int)((unsigned int)(param0 > 0) + param1));
    }
    unsigned int v6 = param3;
    if(param3 >= 0x80000000) {
        unsigned int v7 = v3;
        v3 = (unsigned int)(0 - v3);
        v2 = ~v2;
        v6 = (unsigned int)(0 - (unsigned int)((unsigned int)(v7 > 0) + param3));
    }
    unsigned int v8 = v3;
    if(!v6) {
        if(v5 < v8) {
            v1 = (unsigned int)((unsigned long long)v4 | ((unsigned long long)v5 << 32)) / v8;
        }
        else {
            if(!v8) {
                v8 = 1 / 0;
            }
            v1 = (unsigned int)((unsigned long long)v4 | ((unsigned long long)(v5 % v8) << 32)) / v8;
        }
    }
    else if(v6 > v5) {
        v1 = 0;
    }
    else {
        if(v6 != 0) {
            int i;
            for(i = 31; !(v6 >>> i); --i) {
            }
            v0 = i;
        }
        if((unsigned int)(v0 ^ 0x1f)) {
            int v9 = v8 << ((unsigned int)(v0 ^ 0x1f) & 0x1f);
            unsigned int v10 = (unsigned int)((v6 << ((unsigned int)(v0 ^ 0x1f) & 0x1f)) | (v8 >>> ((32 - (unsigned int)(v0 ^ 0x1f)) & 0x1f)));
            int v11 = v5 >>> ((32 - (unsigned int)(v0 ^ 0x1f)) & 0x1f);
            int v12 = (v5 << ((unsigned int)(v0 ^ 0x1f) & 0x1f)) | (v4 >>> ((32 - (unsigned int)(v0 ^ 0x1f)) & 0x1f));
            unsigned int v13 = (unsigned int)((unsigned long long)v12 | ((unsigned long long)v11 << 32)) / v10;
            unsigned int v14 = (unsigned int)((unsigned long long)v12 | ((unsigned long long)v11 << 32)) % v10;
            v1 = v13;
            unsigned int v15 = (unsigned int)(((unsigned long long)v13 * (unsigned long long)v9) >>> 32L);
            if(v15 > v14 || (v13 * v9 > v4 << ((unsigned int)(v0 ^ 0x1f) & 0x1f) && v15 == v14)) {
                --v1;
            }
        }
        else if(v6 >= v5) {
            v1 = 0;
            if(v8 <= v4) {
                goto loc_80497A3;
            }
        }
        else {
        loc_80497A3:
            v1 = 1;
        }
    }
    unsigned int result = v1;
    if(v2) {
        result = (unsigned int)(0 - result);
    }
    return result;
}

int __udivdi3(unsigned int param0, unsigned int param1, unsigned int param2, unsigned int param3) {
    int v0;
    unsigned int v1;
    if(!param3) {
        return (int)(param1 >= param2 ? (unsigned int)((unsigned long long)param0 | ((unsigned long long)(param1 % (!param2 ? 1 / param2: param2)) << 32)) / (unsigned int)(!param2 ? (unsigned long long)(1 / param2): (unsigned long long)param2): (unsigned int)((unsigned long long)param0 | ((unsigned long long)param1 << 32)) / param2);
    }
    if(param1 < param3) {
        v1 = 0;
    }
    else {
        if(param3 != 0) {
            int i;
            for(i = 31; !(param3 >>> i); --i) {
            }
            v0 = i;
        }
        if((unsigned int)(v0 ^ 0x1f)) {
            unsigned int v2 = (unsigned int)((param3 << ((unsigned int)(v0 ^ 0x1f) & 0x1f)) | (param2 >>> ((unsigned int)(32 - (unsigned int)(v0 ^ 0x1f)) & 0x1f)));
            int v3 = param2 << ((unsigned int)(v0 ^ 0x1f) & 0x1f);
            int v4 = param1 >>> ((unsigned int)(32 - (unsigned int)(v0 ^ 0x1f)) & 0x1f);
            int v5 = (param1 << ((unsigned int)(v0 ^ 0x1f) & 0x1f)) | (param0 >>> ((unsigned int)(32 - (unsigned int)(v0 ^ 0x1f)) & 0x1f));
            unsigned int v6 = (unsigned int)((unsigned long long)v5 | ((unsigned long long)v4 << 32)) / v2;
            unsigned int v7 = (unsigned int)((unsigned long long)v5 | ((unsigned long long)v4 << 32)) % v2;
            unsigned int v8 = (unsigned int)(((unsigned long long)v6 * (unsigned long long)v3) >>> 32L);
            v1 = v8 <= v7 && (v6 * v3 <= param0 << ((unsigned int)(v0 ^ 0x1f) & 0x1f) || v8 != v7) ? v6: v6 - 1;
        }
        else if(param1 <= param3) {
            v1 = 0;
            if(param0 >= param2) {
                v1 = 1;
                return (int)v1;
            }
        }
        else {
            v1 = 1;
        }
    }
    return (int)v1;
}

void __x86.get_pc_thunk.bp() {
}

unsigned int abs32(unsigned int param0) {
    return (int)((unsigned int)(0 - param0) & param0) < 0 == (int)param0 > 0 ? (unsigned int)(0 - param0): param0;
}

int abs64(int param0, int param1) {
    return ((param1 >> 31) + param0) ^ (param1 >> 31);
}

int main() {
    int v0;
    int v1;
    int v2;
    int v3;
    int v4;
    int v5;
    int v6;
    int v7;
    sat_addu32b(-1, 3);
    →printf("sat_addu32b(0x%08x,0x%08x) = 0x%08x\n");
    sat_subu32b(1, 3);
    →printf("sat_subu32b(0x%08x,0x%08x) = 0x%08x\n");
    sat_mulu32b(-1, 3);
    →printf("sat_mulu32b(0x%08x,0x%08x) = 0x%08x\n");
    sat_divu32b(0xffffffff, 3);
    →printf("sat_divu32b(0x%08x,0x%08x) = 0x%08x\n");
    int v8 = sat_adds32b_var1(0x7fffffff, 2);
    int v9 = sat_adds32b_var2(0x7fffffff, 2);
    sat_adds32b_var3(0x7fffffff, 2);
    →printf("sat_adds32b(0x%08x,0x%08x) = 0x%08x 0x%08x 0x%08x\n");
    sat_subs32b(0x80000000, 2);
    →printf("sat_subs32b(0x%08x,0x%08x) = 0x%08x\n");
    sat_muls32b(0x7fffffff, 2);
    →printf("sat_muls32b(0x%08x,0x%08x) = 0x%08x\n");
    sat_divs32b(0x80000000, -1);
    →printf("sat_divs32b(0x%08x,0x%08x) = 0x%08x\n");
    abs32(0xfffffff0);
    →printf("abs32(0x%08x) = 0x%08x\n");
    sgn32(3);
    →printf("sgn32(0x%08x) = 0x%08x\n");
    *(__int128*)&v3 = 0x0X;
    int v10 = /*BAD_CALL!*/ sat_addu64b(0, v0, v4, v1);
    *(__int128*)&v3 = 0x0X;
    unsigned int v11 = sat_subu64b(0, (unsigned int)v0, (unsigned int)v4, (unsigned int)v1);
    int v12 = v11 + v10;
    int v13 = (unsigned int)__carry__(v11, v10) + v7 + v7;
    *(unsigned __int128*)&v3 = gvar_804A010;
    int v14 = sat_divu64b(*(__int128*)&v3, v5, v2, v6);
    int v15 = v14 + v12;
    int v16 = (unsigned int)__carry__(v14, v12) + v7 + v13;
    *(__int128*)&v3 = 0x0X;
    int v17 = sat_adds64b(0, v0, v4, v1);
    int v18 = v17 + v15;
    int v19 = (unsigned int)__carry__(v17, v15) + v7 + v16;
    *(__int128*)&v3 = 0x0X;
    unsigned int v20 = sat_subs64b(0, (unsigned int)v0, (unsigned int)v4, (unsigned int)v1);
    int v21 = v20 + v18;
    int v22 = (unsigned int)__carry__(v20, v18) + v7 + v19;
    *(unsigned __int128*)&v3 = gvar_804A010;
    unsigned int v23 = sat_divs64b(v3, v0, (unsigned int)v4, (unsigned int)v1);
    int v24 = v23 + v21;
    int v25 = (unsigned int)__carry__(v23, v21) + v7 + v22;
    int v26 = abs64(0, 0);
    int v27 = v26 + v24;
    int v28 = (unsigned int)__carry__(v26, v24) + v7 + v25;
    int v29 = sgn64(0, 0);
    if(!(((unsigned int)__carry__(v29, v27) + v7 + v28) | ((v29 + v27) ^ 0x2a))) {
        →puts("not reached");
    }
    return 0;
}

int sat_adds32b_var1(int param0, int param1) {
    int v0 = param0 + param1;
    return ((v0 ^ param0) & ~(param0 ^ param1)) < 0 ? param0 + param1 >= 0 ? 0x80000000: 0x7fffffff: v0;
}

int sat_adds32b_var2(int param0, int param1) {
    int v0 = param0 + param1;
    return (param0 ^ param1) >= 0 ? (v0 ^ param0) < 0 ? 0x7fffffff - (param0 >> 31): v0: v0;
}

int sat_adds32b_var3(int param0, int param1) {
    int v0 = param0 + param1;
    return (((0x7fffffff - (param0 >> 31)) ^ param1) | ~(v0 ^ param1)) >= 0 ? 0x7fffffff - (param0 >> 31): v0;
}

int sat_adds64b(int param0, int param1, int param2, int param3) {
    return (~((unsigned int)__carry__(param0, param2) + param1 + param3) | param3) < 0 ? param0 + param2: 0x7fffffff - (param1 >> 31);
}

int sat_addu32b(int param0, int param1) {
    return __carry__(param0, param1) ? -1: param0 + param1;
}

int sat_addu64b(int param0, int param1, int param2, int param3) {
    return __carry__(param1, param3) ? -1: param0 + param2;
}

int sat_divs32b(int param0, int param1) {
    return ((param1 + 1) | (param0 ^ 0x80000000) ? param0: param0 + 1) / param1;
}

unsigned int sat_divs64b(unsigned int param0, int param1, unsigned int param2, unsigned int param3) {
    int v0 = ((unsigned int)(param0 >= 0x80000000) + param1 - 1) | ((unsigned int)(param2 >= 0xffffffff) + param3) | (param0 + 0x80000000) | (param2 + 1) ? 0: 1;
    return __divdi3((unsigned int)(v0 + param0), (unsigned int)((unsigned int)__carry__(v0, param0) + param1), param2, param3);
}

unsigned int sat_divu32b(unsigned int param0, unsigned int param1) {
    return param0 / param1;
}

int sat_divu64b(__int128 param0, int param1, int param2, int param3) {
    unsigned int v0;
    unsigned int v1;
    unsigned int v2;
    unsigned int v3;
    *(__int128*)&v0 = param0;
    return __udivdi3(v0, v1, v2, v3);
}

int sat_muls32b(int param0, int param1) {
    int v0 = param0 * param1;
    return (unsigned int)(v0 >> 31) != (unsigned int)(((long long)param0 * (long long)param1) >>> 32L) ? 0x7fffffff - ((param0 ^ param1) >> 31): v0;
}

int sat_mulu32b(int param0, int param1) {
    return (unsigned int)(((unsigned long long)param0 * (unsigned long long)param1) >>> 32L) ? -1: param0 * param1;
}

unsigned int sat_subs32b(unsigned int param0, unsigned int param1) {
    unsigned int v0 = param0 - param1;
    return (int)(((unsigned int)(0x7fffffff - (param0 >> 31)) ^ param1) & ((unsigned int)(0x7fffffff - (param0 >> 31)) ^ v0)) < 0 ? (unsigned int)(0x7fffffff - (param0 >> 31)): v0;
}

unsigned int sat_subs64b(unsigned int param0, unsigned int param1, unsigned int param2, unsigned int param3) {
    return ((param1 - ((unsigned int)(param0 < param2) + param3)) & param3) >= 0 ? param0 - param2: (unsigned int)(0x7fffffff - (param1 >> 31));
}

unsigned int sat_subu32b(unsigned int param0, unsigned int param1) {
    return param0 >= param1 ? param0 - param1: 0;
}

unsigned int sat_subu64b(unsigned int param0, unsigned int param1, unsigned int param2, unsigned int param3) {
    return param1 >= param3 ? param0 - param2: 0;
}

int sgn32(int param0) {
    return (param0 >> 31) + (param0 <= 0 ? 0: 1);
}

int sgn64(unsigned int param0, unsigned int param1) {
    int v0 = 0 - ((unsigned int)(param0 > 0) + param1);
    return (param1 >> 31) + ((v0 & param1) < 0 == v0 < 0 ? 0: 1);
}

int sub_8049036() {
    return gvar_804C008();
}

void sub_80490A7() {
}

int sub_80490DC() {
    return 0;
}

void sub_8049128() {
}

int sub_804915D() {
    int result = deregister_tm_clones();
    completed.0 = 1;
    return result;
}

void sub_8049178() {
}


unsigned int __divdi3(unsigned int param0, unsigned int param1, unsigned int param2, unsigned int param3) {
    unsigned int v0;
    unsigned int v1 = param1;
    unsigned int v2 = param0;
    int v3 = 0;
    unsigned int v4 = param3;
    unsigned int v5 = param2;
    if(v1 >= 0x80000000) {
        unsigned int v6 = v2;
        v2 = (unsigned int)(0 - v2);
        v3 = -1;
        v1 = (unsigned int)(0 - ((unsigned int)(v6 > 0) + v1));
    }
    if(param3 >= 0x80000000) {
        unsigned int v7 = v5;
        v5 = (unsigned int)(0 - v5);
        v3 = ~v3;
        v4 = (unsigned int)(0 - ((unsigned int)(v7 > 0) + v4));
    }
    unsigned int v8 = v2;
    unsigned int v9 = v5;
    unsigned int v10 = v5;
    if(!v4) {
        if(v1 < v9) {
            v0 = (unsigned int)((unsigned long long)v2 | ((unsigned long long)v1 << 32)) / v9;
        }
        else {
            if(!v10) {
                v10 = 1 / 0;
            }
            v0 = (unsigned int)((unsigned long long)v8 | ((unsigned long long)(v1 % v10) << 32)) / v10;
        }
    }
    else if(v1 < v4) {
        v0 = 0;
    }
    else {
        if(v4 != 0) {
            unsigned int i;
            for(i = 31; !(v4 >>> i); --i) {
            }
            v8 = i;
        }
        if((v8 ^ 0x1f)) {
            int v11 = v9 << ((v8 ^ 0x1f) & 0x1f);
            v5 = (unsigned int)((v4 << ((v8 ^ 0x1f) & 0x1f)) | (v9 >>> ((32 - (v8 ^ 0x1f)) & 0x1f)));
            int v12 = v1 >>> ((32 - (v8 ^ 0x1f)) & 0x1f);
            int v13 = (v1 << ((v8 ^ 0x1f) & 0x1f)) | (v2 >>> ((32 - (v8 ^ 0x1f)) & 0x1f));
            unsigned int v14 = (unsigned int)((unsigned long long)v13 | ((unsigned long long)v12 << 32)) / v5;
            unsigned int v15 = (unsigned int)((unsigned long long)v13 | ((unsigned long long)v12 << 32)) % v5;
            unsigned int v16 = (unsigned int)(((unsigned long long)v14 * (unsigned long long)v11) >>> 32L);
            v0 = v16 <= v15 && (v14 * v11 <= v2 << ((v8 ^ 0x1f) & 0x1f) || v16 != v15) ? v14: v14 - 1;
        }
        else if(v1 <= v4) {
            v0 = 0;
            if(v2 >= v9) {
                goto loc_80489DC;
            }
        }
        else {
        loc_80489DC:
            v0 = 1;
        }
    }
    unsigned int result = v0;
    if(v3) {
        result = (unsigned int)(0 - result);
    }
    return result;
}

unsigned int __moddi3(unsigned int param0, unsigned int param1, unsigned int param2, unsigned int param3) {
    unsigned int result;
    unsigned int v0 = param1;
    unsigned int v1 = param0;
    int v2 = 0;
    unsigned int v3 = param2;
    unsigned int v4 = param3;
    if(v0 >= 0x80000000) {
        unsigned int v5 = v1;
        v1 = (unsigned int)(0 - v1);
        v2 = -1;
        v0 = (unsigned int)(0 - ((unsigned int)(v5 > 0) + v0));
    }
    if(param3 >= 0x80000000) {
        unsigned int v6 = v3;
        v3 = (unsigned int)(0 - v3);
        v4 = (unsigned int)(0 - ((unsigned int)(v6 > 0) + v4));
    }
    unsigned int v7 = v0;
    unsigned int v8 = v0;
    unsigned int v9 = v1;
    unsigned int v10 = v3;
    unsigned int v11 = v3;
    unsigned int v12 = v3;
    if(!v4) {
        if(v10 > v0) {
            v3 = (unsigned int)((unsigned long long)v1 | ((unsigned long long)v7 << 32)) % v10;
        }
        else {
            if(!v12) {
                v12 = 1 / 0;
            }
            v3 = (unsigned int)((unsigned long long)v9 | ((unsigned long long)(v8 % v12) << 32)) % v12;
        }
        result = v3;
    }
    else if(v4 > v8) {
        result = v1;
    }
    else {
        if(v4 != 0) {
            unsigned int i;
            for(i = 31; !(v4 >>> i); --i) {
            }
            v0 = i;
        }
        if(!(v0 ^ 0x1f)) {
            if(v4 < v8 || v12 <= v9) {
                v9 -= v12;
            }
            result = v9;
        }
        else {
            v3 = (unsigned int)((v4 << ((v0 ^ 0x1f) & 0x1f)) | (v11 >>> ((unsigned int)(32 - (v0 ^ 0x1f)) & 0x1f)));
            unsigned int v13 = v11 << ((v0 ^ 0x1f) & 0x1f);
            int v14 = v8 >>> ((unsigned int)(32 - (v0 ^ 0x1f)) & 0x1f);
            unsigned int v15 = v1 << ((v0 ^ 0x1f) & 0x1f);
            int v16 = (v8 << ((v0 ^ 0x1f) & 0x1f)) | (v1 >>> ((unsigned int)(32 - (v0 ^ 0x1f)) & 0x1f));
            unsigned int v17 = (unsigned int)((unsigned long long)v16 | ((unsigned long long)v14 << 32)) / v3;
            unsigned int v18 = (unsigned int)((unsigned long long)v16 | ((unsigned long long)v14 << 32)) % v3;
            unsigned int v19 = v17 * v13;
            unsigned int v20 = (unsigned int)(((unsigned long long)v17 * (unsigned long long)v13) >>> 32L);
            unsigned int v21 = v19;
            unsigned int v22 = v20;
            if(v20 > v18 || (v20 == v18 && v19 > v15)) {
                v22 = v20 - ((unsigned int)(v19 < v13) + v3);
                v21 = v19 - v13;
            }
            result = (unsigned int)(((v18 - ((unsigned int)(v15 < v21) + v22)) << ((unsigned int)(32 - (v0 ^ 0x1f)) & 0x1f)) | ((v15 - v21) >>> ((v0 ^ 0x1f) & 0x1f)));
        }
    }
    if(v2) {
        result = (unsigned int)(0 - result);
    }
    return result;
}

int __udivdi3(unsigned int param0, unsigned int param1, unsigned int param2, unsigned int param3) {
    unsigned int v0;
    unsigned int v1 = param2;
    unsigned int v2 = param2;
    if(!param3) {
        if(v1 <= param1) {
            unsigned int v3 = v1;
            if(!v1) {
                v3 = 1 / 0;
            }
            v0 = (unsigned int)((unsigned long long)param0 | ((unsigned long long)(param1 % v3) << 32)) / v3;
            return (int)v0;
        }
        return (int)((unsigned int)((unsigned long long)param0 | ((unsigned long long)param1 << 32)) / v1);
    }
    else if(param1 >= param3) {
        if(param3 != 0) {
            unsigned int i;
            for(i = 31; !(param3 >>> i); --i) {
            }
            v1 = i;
        }
        if((v1 ^ 0x1f)) {
            unsigned int v4 = (unsigned int)((param3 << ((v1 ^ 0x1f) & 0x1f)) | (v2 >>> ((unsigned int)(32 - (v1 ^ 0x1f)) & 0x1f)));
            int v5 = v2 << ((v1 ^ 0x1f) & 0x1f);
            int v6 = (param1 << ((v1 ^ 0x1f) & 0x1f)) | (param0 >>> ((unsigned int)(32 - (v1 ^ 0x1f)) & 0x1f));
            int v7 = param1 >>> ((unsigned int)(32 - (v1 ^ 0x1f)) & 0x1f);
            unsigned int v8 = (unsigned int)((unsigned long long)v6 | ((unsigned long long)v7 << 32)) / v4;
            unsigned int v9 = (unsigned int)((unsigned long long)v6 | ((unsigned long long)v7 << 32)) % v4;
            unsigned int v10 = v8;
            unsigned int v11 = (unsigned int)(((unsigned long long)v8 * (unsigned long long)v5) >>> 32L);
            if(v11 > v9 || (v8 * v5 > param0 << ((v1 ^ 0x1f) & 0x1f) && v11 == v9)) {
                --v10;
            }
            return (int)v10;
        }
        if(param1 <= param3) {
            v0 = 0;
            if(v2 <= param0) {
                v0 = 1;
                return (int)v0;
            }
        }
        else {
            v0 = 1;
        }
        return (int)v0;
    }
    return 0;
}

unsigned int __umoddi3(unsigned int param0, unsigned int param1, unsigned int param2, unsigned int param3) {
    int v0;
    unsigned int result;
    unsigned int result1 = param0;
    if(!param3) {
        if(param1 < param2) {
            result = (unsigned int)((unsigned long long)param0 | ((unsigned long long)param1 << 32)) % param2;
        }
        else {
            unsigned int v1 = param2;
            if(!param2) {
                v1 = 1 / 0;
            }
            result = (unsigned int)((unsigned long long)param0 | ((unsigned long long)(param1 % v1) << 32)) % v1;
        }
        return result;
    }
    else if(param1 >= param3) {
        if(param3 != 0) {
            int i;
            for(i = 31; !(param3 >>> i); --i) {
            }
            v0 = i;
        }
        if(!(v0 ^ 0x1f)) {
            if(param1 > param3 || param0 >= param2) {
                result1 = param0 - param2;
            }
            return result1;
        }
        unsigned int v2 = (unsigned int)((param3 << ((v0 ^ 0x1f) & 0x1f)) | (param2 >>> ((32 - (v0 ^ 0x1f)) & 0x1f)));
        result1 = param2 << ((v0 ^ 0x1f) & 0x1f);
        int v3 = (param1 << ((v0 ^ 0x1f) & 0x1f)) | (param0 >>> ((32 - (v0 ^ 0x1f)) & 0x1f));
        int v4 = param1 >>> ((32 - (v0 ^ 0x1f)) & 0x1f);
        unsigned int v5 = (unsigned int)((unsigned long long)v3 | ((unsigned long long)v4 << 32)) / v2;
        unsigned int v6 = (unsigned int)((unsigned long long)v3 | ((unsigned long long)v4 << 32)) % v2;
        unsigned int v7 = v5 * result1;
        unsigned int v8 = (unsigned int)(((unsigned long long)v5 * (unsigned long long)result1) >>> 32L);
        unsigned int v9 = param0 << ((v0 ^ 0x1f) & 0x1f);
        unsigned int v10 = v8;
        unsigned int v11 = v7;
        if(v8 > v6 || (v8 == v6 && v7 > v9)) {
            v10 = v8 - ((unsigned int)(v7 < result1) + v2);
            v11 = v7 - result1;
        }
        return (unsigned int)(((v6 - ((unsigned int)(v11 > v9) + v10)) << ((32 - (v0 ^ 0x1f)) & 0x1f)) | ((v9 - v11) >>> ((v0 ^ 0x1f) & 0x1f)));
    }
    return param0;
}

int advanced_1_unrolled_loop() {
    int v0 = 48;
    →puts("basic");
    do {
        int __c = v0;
        ++v0;
        →putchar(__c);
    }
    while(v0 != 58);
    int __c1 = 48;
    →puts("partial unrolled");
    do {
        →putchar(__c1);
        int __c2 = __c1 + 1;
        __c1 += 2;
        →putchar(__c2);
    }
    while(__c1 != 58);
    →puts("fully unrolled");
    →putchar(48);
    →putchar(49);
    →putchar(50);
    →putchar(51);
    →putchar(52);
    →putchar(53);
    →putchar(54);
    →putchar(55);
    →putchar(56);
    →putchar(57);
    return 0;
}

int basic_1_ternary_simple(int param0) {
    return param0 == 42 ? 0: 1;
}

int basic_2_ternary_other(int param0) {
    return param0 == 42 ? 100: 201;
}

int intermediate_10_double_word_signed_math(unsigned int param0, unsigned int param1, unsigned int param2, unsigned int param3, unsigned int param4, int param5) {
    int v0;
    unsigned int v1 = param0 + param2;
    int v2 = (unsigned int)__carry__(param0, param2) + param1 + param3;
    char v3 = v2 == param5;
    char v4 = v2 < param5;
    char v5 = (((v2 - param5) ^ v2) & (v2 ^ param5)) < 0;
    if(v4 == v5) {
        if(!v3 && v4 == v5) {
            →puts((char*)&gvar_8048F94);
        }
        else if(v1 > param4) {
            →puts((char*)&gvar_8048F94);
        }
    }
    unsigned int v6 = param0 - param2;
    int v7 = (int)(param1 - ((unsigned int)(param0 < param2) + param3));
    char v8 = v7 > param5;
    char v9 = (((param5 - v7) ^ param5) & (v7 ^ param5)) < 0;
    if((v7 == param5 || v8 != v9)) {
        if(v8 != v9) {
            →puts((char*)&gvar_8048F98);
        }
        else if(v6 > param4) {
            →puts((char*)&gvar_8048F98);
        }
    }
    unsigned int v10 = param0 * param2;
    int v11 = (int)(param0 * param3 + param1 * param2 + (unsigned int)(((unsigned long long)param0 * (unsigned long long)param2) >>> 32L));
    char v12 = v11 > param5;
    char v13 = (((param5 - v11) ^ param5) & (v11 ^ param5)) < 0;
    if((v11 == param5 || v12 != v13)) {
        if(v12 != v13) {
            →puts("mult");
        }
        else if(v10 > param4) {
            →puts("mult");
        }
    }
    unsigned int v14 = __divdi3(param0, param1, param2, param3);
    char v15 = v0 > param5;
    char v16 = (((param5 - v0) ^ param5) & (v0 ^ param5)) < 0;
    if((v0 == param5 || v15 != v16) && (v15 != v16 || v14 > param4)) {
        →puts("diff");
    }
    unsigned int v17 = __moddi3(param0, param1, param2, param3);
    if(!((v17 ^ param4) | (v0 ^ param5))) {
        →puts("modulo");
    }
    return 0;
}

int intermediate_10_double_word_unsigned_math(unsigned int param0, unsigned int param1, unsigned int param2, unsigned int param3, unsigned int param4, unsigned int param5) {
    unsigned int v0;
    unsigned int v1 = param0 + param2;
    unsigned int v2 = (unsigned int)((unsigned int)__carry__(param0, param2) + param1 + param3);
    char v3 = v2 == param5;
    if(v2 >= param5) {
        if(v3 == 0) {
            →puts((char*)&gvar_8048F94);
        }
        else if(v1 > param4) {
            →puts((char*)&gvar_8048F94);
        }
    }
    unsigned int v4 = param0 - param2;
    unsigned int v5 = param1 - ((unsigned int)(param0 < param2) + param3);
    char v6 = v5 > param5;
    if((v6 || v5 == param5)) {
        if(v6) {
            →puts((char*)&gvar_8048F98);
        }
        else if(v4 > param4) {
            →puts((char*)&gvar_8048F98);
        }
    }
    unsigned int v7 = param0 * param2;
    unsigned int v8 = param0 * param3 + param1 * param2 + (unsigned int)(((unsigned long long)param0 * (unsigned long long)param2) >>> 32L);
    char v9 = v8 > param5;
    if((v9 || v8 == param5)) {
        if(v9) {
            →puts("mult");
        }
        else if(v7 > param4) {
            →puts("mult");
        }
    }
    int v10 = __udivdi3(param0, param1, param2, param3);
    char v11 = v0 > param5;
    if((v11 || v0 == param5) && (v11 || (unsigned int)v10 > param4)) {
        →puts("diff");
    }
    unsigned int v12 = __umoddi3(param0, param1, param2, param3);
    if(!((v12 ^ param4) | (v0 ^ param5))) {
        →puts("modulo");
    }
    return 0;
}

int intermediate_1_ternary_blocks(int param0) {
    return param0 == 42 ? 0: 1;
}

int intermediate_2_other_in_blocks(int param0) {
    return param0 == 42 ? 100: 201;
}

int main(int param0, unsigned int* param1) {
    int v0;
    int v1;
    int v2 = v0;
    int v3 = v1;
    int* ptr0 = &param0;
    unsigned int* ptr1 = param1;
    int v4 = basic_1_ternary_simple(param0);
    int v5 = /*BAD_CALL!*/ basic_2_ternary_other(param0);
    int v6 = /*BAD_CALL!*/ intermediate_1_ternary_blocks(param0);
    int v7 = /*BAD_CALL!*/ intermediate_2_other_in_blocks(param0);
    int v8 = /*BAD_CALL!*/ intermediate_10_double_word_signed_math((unsigned int)param0, (unsigned int)(param0 >> 31), (unsigned int)param0, (unsigned int)(param0 >> 31), (unsigned int)param0, (int)(unsigned int)(param0 >> 31));
    int v9 = /*BAD_CALL!*/ intermediate_10_double_word_unsigned_math((unsigned int)param0, (unsigned int)(param0 >> 31), (unsigned int)param0, (unsigned int)(param0 >> 31), (unsigned int)param0, (unsigned int)(param0 >> 31));
    int v10 = &loc_80483AF;
    int v11 = /*BAD_CALL!*/ advanced_1_unrolled_loop();
    return (int)**param1 + v5 + (v6 + v7) + (v8 + v9 + (v11 + v4));
}

void sub_80482F0() {
    jump gvar_804B008;
}

void sub_8048330() {
    jump __gmon_start__;
}

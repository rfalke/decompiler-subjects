
long basic_operations(long param0, long param1, long param2, long param3) {
    use(param0, param1, param2, param3);
    use(param0, param1, param2, param3);
    use(param0, param1, param2, param3);
    use(param0, param1, param2, param3);
    use(param0, param1, param2, param3);
    use(param0, param1, param2, param3);
    use(param0, param1, param2, param3);
    return 123L;
}

long compare_floats() {
    char v0;
    char v1;
    char v2;
    char v3;
    double v4;
    double v5;
    long v6;
    int v7 = use_int(v5 == v4 ? 1: v5 > v4 ? 0: v5 >= v4 ? (long)(unsigned char)((unsigned long)(v5 == v4 ? 0: v5 > v4 ? 0: v5 >= v4 ? 0: 1) | ((unsigned long)((v6 >>> 8L) & 0xffffffffffffffL) << 8)): 0L);
    use_int(v5 == v4 ? 1: v5 > v4 ? 0: v5 >= v4 ? (long)(unsigned char)((unsigned long)(v5 == v4 ? 0: v5 > v4 ? 0: v5 >= v4 ? 1: 0) | ((unsigned long)((v7 >>> 8L) & 0xffffffffffffffL) << 8)): 1L);
    if(v5 == v4) {
        v3 = 1;
        v2 = 0;
    }
    else if(v5 > v4) {
        v3 = 0;
        v2 = 0;
    }
    else {
        v3 = v5 < v4 ? 0: 1;
        v2 = 1;
    }
    use_int(v2 || v3 ? 0L: 1L);
    use_int(v5 == v4 ? 0: v5 <= v4 ? 0L: 1L);
    if(v4 == v5) {
        v1 = 1;
        v0 = 0;
    }
    else if(v4 > v5) {
        v1 = 0;
        v0 = 0;
    }
    else {
        v1 = v4 < v5 ? 0: 1;
        v0 = 1;
    }
    use_int(v0 || v1 ? 0L: 1L);
    use_int(v4 == v5 ? 0: v4 <= v5 ? 0L: 1L);
    return 124L;
}

long constants(long param0, long param1, long param2, long param3) {
    use(param0, param1, param2, param3);
    use(param0, param1, param2, param3);
    use(param0, param1, param2, param3);
    use(param0, param1, param2, param3);
    use(param0, param1, param2, param3);
    return 125L;
}

void converting_between_floats_d1() {
    global_double = global_float;
}

void converting_between_floats_d2() {
    global_double = *(__int128*)&global_long_double;
}

void converting_between_floats_f1() {
    global_float = global_double;
}

void converting_between_floats_f2() {
    global_float = *(__int128*)&global_long_double;
}

void converting_between_floats_l1() {
    *(__int128*)&global_long_double = global_float;
}

void converting_between_floats_l2() {
    *(__int128*)&global_long_double = global_double;
}

long main() {
    →printf("%zu %zu %zu %zu %zu\n", 1L, 2L, 4L, 8L, 8L);
    →printf("%zu %zu %zu\n", 4L, 8L, 16L);
    return 0L;
}

long read_floats(long param0, long param1, long param2, long param3) {
    use(param0, param1, param2, param3);
    return 122L;
}

long read_ints(long param0, long param1, long param2, long param3) {
    use(param0, param1, param2, param3);
    return 120L;
}

int use(long param0, long param1, long param2, long param3) {
    return →printf((char*)&gvar_400A40, param1, param2, param3);
}

int use_int(long param0) {
    return →printf((char*)&gvar_400A43);
}

void write_floats() {
    double v0;
    global_float = v0;
    global_double = v0;
    *(__int128*)&global_long_double = v0;
}

long write_ints() {
    double v0;
    global_char = (unsigned char)(int)v0;
    global_short = (unsigned short)(int)v0;
    global_int = (int)v0;
    global_long = (long)v0;
    global_long_long = (long)v0;
    return 121L;
}

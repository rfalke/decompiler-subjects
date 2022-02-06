
long basic_operations() {
    use();
    use();
    use();
    use();
    use();
    use();
    use();
    return 123L;
}

long compare_floats() {
    char v0;
    char v1;
    char v2;
    char v3;
    double v4;
    double v5;
    char v6 = v5 == v4 ? 0: v5 <= v4 ? v5 >= v4: 0;
    long v7 = (unsigned long)(v6 ? 0: 1) | ((unsigned long)((v7 >>> 8L) & 0xffffffffffffffL) << 8);
    char v8 = v5 == v4 ? 1: v5 <= v4 ? v5 >= v4: 0;
    int v9 = /*BAD_CALL!*/ use_int(v8 ? (long)(unsigned char)v7: 0L);
    char v10 = v5 == v4 ? 0: v5 <= v4 ? v5 >= v4: 0;
    v9 = (unsigned long)(v10 ? 1: 0) | ((unsigned long)((v9 >>> 8L) & 0xffffffffffffffL) << 8);
    char v11 = v5 == v4 ? 1: v5 <= v4 ? v5 >= v4: 0;
    int v12 = /*BAD_CALL!*/ use_int(v11 ? (long)(unsigned char)v9: 1L);
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
    int v13 = use_int(v2 || v3 ? 0L: 1L);
    int v14 = /*BAD_CALL!*/ use_int(v5 != v4 ? v5 <= v4: 0 ? 0L: 1L);
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
    int v15 = use_int(v0 || v1 ? 0L: 1L);
    use_int(v4 != v5 ? v4 <= v5: 0 ? 0L: 1L);
    return 124L;
}

long constants() {
    use();
    use();
    use();
    use();
    use();
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
    →printf("%zu %zu %zu %zu %zu\n");
    →printf("%zu %zu %zu\n");
    return 0L;
}

long read_floats() {
    use();
    return 122L;
}

long read_ints() {
    use();
    return 120L;
}

long sub_4004B9() {
    long v0;
    long v1 = v0;
    deregister_tm_clones();
    completed.6917 = 1;
}

void sub_4004CA() {
}

long sub_4004E0() {
    return register_tm_clones();
}

int use() {
    return →printf((char*)&gvar_400A40);
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
    int v0;
    double v1;
    global_char = (unsigned char)(int)v1;
    global_short = (unsigned short)(int)v1;
    global_int = (int)v1;
    global_long = (unsigned long)(int)v1 | ((unsigned long)v0 << 32);
    global_long_long = (unsigned long)(int)v1 | ((unsigned long)v0 << 32);
    return 121L;
}

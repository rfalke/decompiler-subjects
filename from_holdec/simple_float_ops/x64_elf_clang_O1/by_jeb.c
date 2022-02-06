
long basic_operations() {
    double v0;
    double v1;
    long v2;
    *(__int128*)&v0 = (unsigned __int128)v1 | ((unsigned __int128)v2 << 64);
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
    double v6;
    double v7;
    double v8;
    double v9;
    double v10;
    __int128 v11;
    use_int((double)v11 != v10 ? 0L: 1L);
    use_int((double)v11 == v10 ? 0L: 1L);
    if(v4 == v10) {
        v3 = 1;
        v2 = 0;
    }
    else if(v5 > v10) {
        v3 = 0;
        v2 = 0;
    }
    else {
        v3 = v6 < v10 ? 0: 1;
        v2 = 1;
    }
    use_int(v2 || v3 ? 0L: 1L);
    use_int(v2 ? 0L: 1L);
    if(v10 == v7) {
        v1 = 1;
        v0 = 0;
    }
    else if(v10 > v8) {
        v1 = 0;
        v0 = 0;
    }
    else {
        v1 = v10 < v9 ? 0: 1;
        v0 = 1;
    }
    use_int(v0 || v1 ? 0L: 1L);
    use_int(v0 ? 0L: 1L);
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
    →printf((char*)"%zu %zu %zu\n");
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
    return →printf((char*)&gvar_400940);
}

int use_int(long param0) {
    return →printf((char*)&gvar_400943);
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

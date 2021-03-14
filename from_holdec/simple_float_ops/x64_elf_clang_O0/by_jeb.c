
long basic_operations(long param0, long param1, long param2) {
    use(param0, param1, param2);
    use(param0, param1, param2);
    use(param0, param1, param2);
    use(param0, param1, param2);
    use(param0, param1, param2);
    use(param0, param1, param2);
    use(param0, param1, param2);
    return 123L;
}

long compare_floats(long param0, long param1, long param2) {
    char v0;
    char v1;
    char v2;
    char v3;
    char v4;
    char v5;
    char v6;
    char v7;
    double v8;
    double v9;
    if(v9 == v8) {
        v7 = 1;
        v6 = 0;
    }
    else if(v9 > v8) {
        v7 = 0;
        v6 = 0;
    }
    else if(v9 < v8) {
        v7 = 0;
        v6 = 0;
    }
    else {
        v7 = 1;
        v6 = 1;
    }
    use_int((long)((v6 ? 0: 1) & (v7 ? 1: 0) & 0x1), param1, param2);
    if(v9 == v8) {
        v5 = 1;
        v4 = 0;
    }
    else if(v9 > v8) {
        v5 = 0;
        v4 = 0;
    }
    else if(v9 < v8) {
        v5 = 0;
        v4 = 0;
    }
    else {
        v5 = 1;
        v4 = 1;
    }
    use_int((long)(((v4 ? 1: 0) | (v5 ? 0: 1)) & 0x1), param1, param2);
    if(v9 == v8) {
        v3 = 1;
        v2 = 0;
    }
    else if(v9 > v8) {
        v3 = 0;
        v2 = 0;
    }
    else {
        v3 = v9 < v8 ? 0: 1;
        v2 = 1;
    }
    use_int((long)((v2 || v3 ? 0: 1) & 0x1), param1, param2);
    use_int((long)((v9 == v8 ? 0: v9 <= v8 ? 0: 1) & 0x1), param1, param2);
    if(v8 == v9) {
        v1 = 1;
        v0 = 0;
    }
    else if(v8 > v9) {
        v1 = 0;
        v0 = 0;
    }
    else {
        v1 = v8 < v9 ? 0: 1;
        v0 = 1;
    }
    use_int((long)((v0 || v1 ? 0: 1) & 0x1), param1, param2);
    use_int((long)((v8 == v9 ? 0: v8 <= v9 ? 0: 1) & 0x1), param1, param2);
    return 124L;
}

long constants(long param0, long param1, long param2) {
    use(param0, param1, param2);
    use(param0, param1, param2);
    use(param0, param1, param2);
    use(param0, param1, param2);
    use(param0, param1, param2);
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
    →printf((char*)0x400AE6, 4L, 8L, 16L);
    return 0L;
}

long read_floats(long param0, long param1, long param2) {
    use(param0, param1, param2);
    return 122L;
}

long read_ints(long param0, long param1, long param2) {
    use(param0, param1, param2);
    return 120L;
}

int use(long param0, long param1, long param2) {
    return →printf((char*)&gvar_400AD8, param1, param2);
}

int use_int(int param0, long param1, long param2) {
    return →printf((char*)&gvar_400ADB, (unsigned long)param0, param2);
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


long basic_operations(long param0, long param1, long param2) {
    long v0;
    →printf((char*)&gvar_400A20, param1, param2);
    →printf((char*)&gvar_400A20);
    →printf((char*)&gvar_400A20);
    →printf((char*)&gvar_400A20);
    →printf((char*)&gvar_400A20);
    →printf((char*)&gvar_400A20);
    →printf((char*)&gvar_400A20, param1, param2, v0);
    return 123L;
}

long compare_floats(long param0, long param1) {
    char v0;
    char v1;
    double v2;
    double v3;
    long v4;
    if(v3 == v2) {
        v1 = 1;
        v0 = 0;
    }
    else if(v3 > v2) {
        v1 = 0;
        v0 = 0;
    }
    else if(v3 < v2) {
        v1 = 0;
        v0 = 0;
    }
    else {
        v1 = 1;
        v0 = 1;
    }
    →printf((char*)&gvar_400A23, v1 ? v0 ? 0L: 1L: 0L, param1);
    →printf((char*)&gvar_400A23);
    →printf((char*)&gvar_400A23);
    →printf((char*)&gvar_400A23);
    →printf((char*)&gvar_400A23);
    →printf((char*)&gvar_400A23, v2 == v3 ? 0: v2 <= v3 ? 0L: 1L, param1, v4);
    return 124L;
}

long constants() {
    long v0;
    long v1;
    long v2;
    →printf((char*)&gvar_400A20);
    →printf((char*)&gvar_400A20);
    →printf((char*)&gvar_400A20);
    →printf((char*)&gvar_400A20);
    →printf((char*)&gvar_400A20, v0, v1, v2);
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
    →printf((char*)0x400A2E, 4L, 8L, 16L);
    return 0L;
}

long read_floats(long param0, long param1, long param2, long param3) {
    →printf((char*)&gvar_400A20, param1, param2, param3);
    return 122L;
}

long read_ints(long param0, long param1) {
    →printf((char*)&gvar_400A20, param1);
    return 120L;
}

int use() {
    return →printf((char*)&gvar_400A20);
}

int use_int() {
    return →printf((char*)&gvar_400A23);
}

void write_floats() {
    double v0;
    global_double = v0;
    *(__int128*)&global_long_double = v0;
    global_float = v0;
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

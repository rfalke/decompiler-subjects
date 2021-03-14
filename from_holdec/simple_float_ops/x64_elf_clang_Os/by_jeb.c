
long basic_operations() {
    long v0;
    long v1;
    long v2;
    long v3;
    long v4;
    →printf((char*)&gvar_400970);
    →printf((char*)&gvar_400970);
    →printf((char*)&gvar_400970);
    →printf((char*)&gvar_400970);
    →printf((char*)&gvar_400970);
    →printf((char*)&gvar_400970);
    →printf((char*)&gvar_400970, v0, v1, v2, v3, v4);
    return 123L;
}

long compare_floats(long param0, long param1) {
    double v0;
    long v1;
    double v2;
    long v3 = cmpeqsd(v0, v2);
    →printf((char*)&gvar_400973, (unsigned long)((unsigned int)v1 & 0x1), param1, param0);
    long v4 = cmpneqsd(v0, v2);
    →printf((char*)&gvar_400973);
    →printf((char*)&gvar_400973);
    /*BAD_CALL!*/ →printf((char*)&gvar_400973);
    →printf((char*)&gvar_400973);
    →printf((char*)&gvar_400973, (v2 == v0 ? 0: v2 <= v0 ? 0L: 1L) & 0xffffffffL, param1);
    return 124L;
}

long constants(long param0, long param1) {
    →printf((char*)&gvar_400970, param1);
    →printf((char*)&gvar_400970);
    →printf((char*)&gvar_400970);
    →printf((char*)&gvar_400970);
    →printf((char*)&gvar_400970, param1);
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
    →printf((char*)0x40097E, 4L, 8L, 16L);
    return 0L;
}

long read_floats(long param0, long param1, long param2, long param3) {
    →printf((char*)&gvar_400970, param1, param2, param3);
    return 122L;
}

long read_ints(long param0, long param1) {
    →printf((char*)&gvar_400970, param1);
    return 120L;
}

int use() {
    return →printf((char*)&gvar_400970);
}

int use_int() {
    return →printf((char*)&gvar_400973);
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

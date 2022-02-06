
long basic_operations() {
    double v0;
    double v1;
    long v2;
    *(__int128*)&v0 = (unsigned __int128)v1 | ((unsigned __int128)v2 << 64);
    int v3 = →printf((char*)&gvar_4009D0);
    int v4 = →printf((char*)&gvar_4009D0);
    int v5 = →printf((char*)&gvar_4009D0);
    int v6 = →printf((char*)&gvar_4009D0);
    int v7 = →printf((char*)&gvar_4009D0);
    int v8 = →printf((char*)&gvar_4009D0);
    →printf((char*)&gvar_4009D0);
    return 123L;
}

long compare_floats() {
    →printf((char*)&gvar_4009D3);
    →printf((char*)&gvar_4009D3);
    →printf((char*)&gvar_4009D3);
    →printf((char*)&gvar_4009D3);
    →printf((char*)&gvar_4009D3);
    →printf((char*)&gvar_4009D3);
    return 124L;
}

long constants() {
    int v0 = →printf((char*)&gvar_4009D0);
    int v1 = →printf((char*)&gvar_4009D0);
    int v2 = →printf((char*)&gvar_4009D0);
    int v3 = →printf((char*)&gvar_4009D0);
    →printf((char*)&gvar_4009D0);
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

char read_floats() {
    →printf((char*)&gvar_4009D0);
    return 122;
}

long read_ints() {
    →printf((char*)&gvar_4009D0);
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
    return →printf((char*)&gvar_4009D0);
}

int use_int(long param0) {
    return →printf((char*)&gvar_4009D3);
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

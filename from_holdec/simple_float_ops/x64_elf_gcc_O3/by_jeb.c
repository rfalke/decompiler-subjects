
long basic_operations() {
    →printf((char*)&gvar_400A20);
    →printf((char*)&gvar_400A20);
    →printf((char*)&gvar_400A20);
    →printf((char*)&gvar_400A20);
    →printf((char*)&gvar_400A20);
    →printf((char*)&gvar_400A20);
    →printf((char*)&gvar_400A20);
    return 123L;
}

long compare_floats() {
    →printf((char*)&gvar_400A23);
    →printf((char*)&gvar_400A23);
    →printf((char*)&gvar_400A23);
    →printf((char*)&gvar_400A23);
    →printf((char*)&gvar_400A23);
    →printf((char*)&gvar_400A23);
    return 124L;
}

long constants() {
    →printf((char*)&gvar_400A20);
    →printf((char*)&gvar_400A20);
    →printf((char*)&gvar_400A20);
    →printf((char*)&gvar_400A20);
    →printf((char*)&gvar_400A20);
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
    →printf((char*)&gvar_400A20);
    return 122L;
}

long read_ints() {
    →printf((char*)&gvar_400A20);
    return 120L;
}

long sub_400509() {
    long v0;
    long v1 = v0;
    deregister_tm_clones();
    completed.6917 = 1;
}

void sub_40051A() {
}

long sub_400530() {
    return register_tm_clones();
}

int use() {
    return →printf((char*)&gvar_400A20);
}

int use_int(long param0) {
    return →printf((char*)&gvar_400A23);
}

void write_floats() {
    double v0;
    global_double = v0;
    *(__int128*)&global_long_double = v0;
    global_float = v0;
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

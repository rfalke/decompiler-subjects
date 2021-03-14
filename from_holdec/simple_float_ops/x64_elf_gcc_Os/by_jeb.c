
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
    use_int();
    use_int();
    use_int();
    use_int();
    use_int();
    use_int();
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
    →printf("%zu %zu %zu %zu %zu\n", 1L, 2L, 4L, 8L, 8L);
    →printf((char*)0x4008DE, 4L, 8L, 16L);
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

int use() {
    return →printf((char*)&gvar_4008D0);
}

int use_int() {
    return →printf((char*)&gvar_4008D3);
}

void write_floats() {
    double v0;
    global_double = v0;
    global_float = v0;
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

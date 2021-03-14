
void basic_operations() {
    // Decompilation error
}

void compare_floats() {
    // Decompilation error
}

int constants(double param0, int param1) {
    int v0;
    int v1;
    double v2 = param0;
    *(long long*)&v0 = param0 + param0;
    use(v0, v1);
    *(long long*)&v0 = v2 * 3.0;
    use(v0, v1);
    *(long long*)&v0 = v2 * 3.141592653589793;
    use(v0, v1);
    *(long long*)&v0 = v2 * 10.0;
    use(v0, v1);
    *(long long*)&v0 = v2 * 12.345;
    use(v0, v1);
    return 125;
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

int main() {
    →printf("%zu %zu %zu %zu %zu\n", 1, 2, 4, 4, 8);
    →printf((char*)0x8048832, 4, 8, 12);
    return 0;
}

int read_floats() {
    int v0;
    int v1;
    __SyntheticTypeUnknownF v2;
    fldz();
    *(long long*)&v0 = v2 + global_float + global_double + *(__int128*)&global_long_double;
    use(v0, v1);
    return 122;
}

int read_ints() {
    int v0;
    int v1;
    *(long long*)&v0 = (double)(short)global_char + 0.0 + (double)global_short + (double)global_int + (double)global_long + (double)global_long_long;
    use(v0, v1);
    return 120;
}

void sub_80482D0() {
    jump gvar_804A008;
}

void sub_8048300() {
    jump __gmon_start__;
}

int use(int param0, int param1) {
    int v0;
    int v1;
    int v2;
    int v3;
    return →printf((char*)&gvar_8048824, param0, param1, v0, v1, v2, v3);
}

int use_int(int param0) {
    int v0;
    int v1;
    int v2;
    int v3;
    int v4;
    return →printf((char*)&gvar_8048827, param0, v0, v1, v2, v3, v4);
}

void write_floats(double param0, int param1) {
    global_float = param0;
    global_double = param0;
    *(__int128*)&global_long_double = param0;
}

int write_ints(double param0, int param1) {
    short v0;
    short v1;
    unsigned short v2;
    unsigned int v3;
    v0 = fnstcw(v0);
    short v1 = fldcw((unsigned short)(unsigned char)v0 | ((unsigned short)12 << 8));
    fist();
    v0 = fldcw(v0);
    global_char = (unsigned char)v2;
    global_short = v2;
    v1 = fldcw(v1);
    fist();
    v0 = fldcw(v0);
    global_int = v3;
    global_long = v3;
    v1 = fldcw(v1);
    fistp();
    v0 = fldcw(v0);
    return 121;
}

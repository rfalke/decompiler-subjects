
void basic_operations() {
    // Decompilation error
}

void compare_floats() {
    // Decompilation error
}

int constants(double param0, int param1) {
    int v0;
    use(2.0 * param0, v0);
    use(3.0 * param0, v0);
    use(3.141592653589793 * param0, v0);
    use(10.0 * param0, v0);
    use(12.345 * param0, v0);
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
    →printf((char*)0x8048B06, 4, 8, 12);
    return 0;
}

int read_floats() {
    int v0;
    int v1 = 0;
    int v2 = 0;
    double v3 = global_float + 0.0;
    *(double*)&v2 = global_float + 0.0;
    *(double*)&v2 = v3 + global_double;
    *(long long*)&v0 = *(__int128*)&global_long_double + *(double*)&v2;
    *(long long*)&v2 = *(long long*)&v0;
    use(*(long long*)&v2, v0);
    return 122;
}

int read_ints() {
    int v0;
    int v1 = 0;
    int v2 = 0;
    double v3 = (double)(int)global_char + 0.0;
    *(double*)&v2 = (double)(int)global_char + 0.0;
    v3 += (double)(int)global_short;
    *(double*)&v2 = v3;
    v3 += (double)global_int;
    *(double*)&v2 = v3;
    *(double*)&v2 = v3 + (double)global_long;
    *(double*)&v0 = (double)global_long_long;
    *(double*)&v2 = *(double*)&v0 + *(double*)&v2;
    use(*(long long*)&v2, v0);
    return 120;
}

void sub_80482D0() {
    jump gvar_804A008;
}

void sub_8048300() {
    jump __gmon_start__;
}

int use(long long param0, int param1) {
    int v0;
    int v1;
    int v2;
    int v3;
    int v4;
    *(long long*)&v0 = param0;
    long long v5 = *(long long*)&v0;
    char* __format = (char*)&gvar_8048AF8;
    *(long long*)&v1 = v5;
    return →printf(__format, v1, v2, v3, v0, v4);
}

int use_int(int param0) {
    int v0;
    int v1;
    int v2;
    return →printf((char*)&gvar_8048AFB, param0, v0, v1, v2, param0);
}

void write_floats(double param0, int param1) {
    global_float = param0;
    global_double = param0;
    *(__int128*)&global_long_double = param0;
}

int write_ints(double param0, int param1) {
    short v0;
    int v1;
    int v2;
    global_char = (unsigned char)(int)param0;
    global_short = (unsigned short)(int)param0;
    global_int = (int)param0;
    global_long = (int)param0;
    v0 = fnstcw(v0);
    short v3 = v0;
    v0 = fldcw(3199);
    fistp();
    v0 = fldcw(v3);
    global_long_long = (unsigned long long)v1 | ((unsigned long long)v2 << 32);
    return 121;
}

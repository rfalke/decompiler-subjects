
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
    →printf("%zu %zu %zu %zu %zu\n");
    →printf("%zu %zu %zu\n");
    return 0;
}

int read_floats() {
    int v0;
    int v1;
    float v2 = global_float;
    *(double*)&v0 = v2 + 0.0;
    *(double*)&v0 = v2 + 0.0 + global_double;
    *(long long*)&v1 = *(__int128*)&global_long_double + *(double*)&v0;
    *(long long*)&v0 = *(long long*)&v1;
    use(*(long long*)&v0, v1);
    return 122;
}

int read_ints() {
    int v0;
    int v1;
    int v2 = (int)global_char;
    *(double*)&v0 = (double)v2 + 0.0;
    int v3 = (int)global_short;
    *(double*)&v0 = (double)v2 + 0.0 + (double)v3;
    double v4 = (double)v2 + 0.0 + (double)v3 + (double)global_int;
    *(double*)&v0 = (double)v2 + 0.0 + (double)v3 + (double)global_int;
    *(double*)&v0 = v4 + (double)global_long;
    *(double*)&v1 = (double)global_long_long;
    *(double*)&v0 = *(double*)&v1 + *(double*)&v0;
    use(*(long long*)&v0, v1);
    return 120;
}

int sub_80482D6() {
    return gvar_804A008();
}

int sub_8048300() {
    return __gmon_start__();
}

int sub_804835F() {
    return 0;
}

void sub_8048398() {
}

int sub_80483C9() {
    int v0;
    int v1 = v0;
    deregister_tm_clones();
    completed.6532 = 1;
}

void sub_80483DC() {
}

int sub_80483F0() {
    return register_tm_clones();
}

int use(long long param0, int param1) {
    int result;
    →printf(&gvar_8048AF8);
    return result;
}

int use_int(int param0) {
    int result;
    →printf(&gvar_8048AFB);
    return result;
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
    short v0 = fnstcw();
    fldcw(3199);
    *(long long*)&v1 = (long long)param0;
    fldcw(v0);
    global_long_long = (unsigned long long)v1 | ((unsigned long long)v2 << 32);
    return 121;
}

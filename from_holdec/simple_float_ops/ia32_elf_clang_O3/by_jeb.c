
void basic_operations() {
    // Decompilation error
}

void compare_floats() {
    // Decompilation error
}

int constants(double param0, int param1) {
    int v0;
    int v1;
    *(double*)&v0 = param0 + param0;
    →printf((char*)&gvar_8048990, v0);
    *(double*)&v0 = (double)(3.0 * param0);
    →printf((char*)&gvar_8048990, v0);
    *(double*)&v0 = (double)(3.141592653589793 * param0);
    →printf((char*)&gvar_8048990, v0);
    *(double*)&v0 = (double)(10.0 * param0);
    →printf((char*)&gvar_8048990, v0);
    *(double*)&v0 = param0 * 12.345;
    →printf((char*)&gvar_8048990, v0, v1);
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
    →printf((char*)0x804899E, 4, 8, 12);
    return 0;
}

int read_floats() {
    int v0;
    int v1;
    int v2;
    int v3;
    int v4;
    int v5;
    __SyntheticTypeUnknownF v6 = *(__int128*)&global_long_double;
    *(double*)&v0 = (double)(0.0 + global_float) + global_double;
    *(long long*)&v1 = v6 + *(double*)&v0;
    →printf((char*)&gvar_8048990, v1, v2, v3, v0, v4, v5);
    return 122;
}

int read_ints() {
    int v0;
    int v1;
    int v2;
    int v3;
    int v4;
    int v5;
    double v6 = (double)global_int;
    double v7 = (double)global_long;
    double v8 = (double)(int)global_char;
    int v9 = (int)global_short;
    *(double*)&v0 = (double)global_long_long;
    *(double*)&v1 = v7 + (v6 + ((double)v9 + v8)) + *(double*)&v0;
    →printf((char*)&gvar_8048990, v1, v2, v3, v0, v4, v5);
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
    *(long long*)&v0 = param0;
    return →printf((char*)&gvar_8048990, v0, v1);
}

int use_int(int param0) {
    int v0;
    int v1;
    int v2;
    int v3;
    int v4;
    return →printf((char*)&gvar_8048993, param0, v0, v1, v2, v3, v4);
}

void write_floats(double param0, int param1) {
    global_double = param0;
    global_float = param0;
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

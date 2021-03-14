
void basic_operations() {
    // Decompilation error
}

void compare_floats() {
    // Decompilation error
}

int constants(double param0, int param1) {
    int v0;
    int v1;
    int v2;
    int v3;
    int v4;
    int v5;
    int v6;
    int v7;
    int v8;
    int v9;
    __SyntheticTypeUnknownF v10 = param0;
    *(long long*)&v5 = v10 + v10;
    *(long long*)&v0 = v10;
    →printf((char*)&gvar_8048914, v0);
    __SyntheticTypeUnknownF v11 = *(double*)&v5;
    char* __format = (char*)&gvar_8048914;
    *(long long*)&v0 = v11 * 3.0;
    /*BAD_CALL!*/ →printf(__format, v0);
    *(long long*)&v0 = *(double*)&v5 * 3.141592653589793;
    /*BAD_CALL!*/ →printf(__format, v0);
    *(long long*)&v0 = *(double*)&v5 * 10.0;
    /*BAD_CALL!*/ →printf(__format, v0);
    *(long long*)&v0 = *(double*)&v5 * 12.345;
    →printf(__format, v0, v6, v1, v7, v2, v5, v3, v8, v4, v9);
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
    →printf((char*)0x8048922, 4, 8, 12);
    return 0;
}

int read_floats() {
    int v0;
    int v1;
    int v2;
    int v3;
    int v4;
    int v5;
    int v6;
    int v7;
    int v8;
    int v9;
    __SyntheticTypeUnknownF v10;
    fldz();
    *(long long*)&v5 = v10 + global_float + global_double + *(__int128*)&global_long_double;
    *(long long*)&v0 = *(double*)&v5;
    →printf((char*)&gvar_8048914, v0, v6, v1, v7, v2, v5, v3, v8, v4, v9);
    return 122;
}

int read_ints() {
    int v0;
    int v1;
    int v2;
    int v3;
    int v4;
    int v5;
    int v6;
    int v7;
    int v8;
    int v9;
    (v0 >>> 16) & 0xFFFF = (short)global_char;
    *(long long*)&v1 = (double)(unsigned short)(v0 >>> 16) + 0.0 + (double)global_short + (double)global_int + (double)global_long + (double)global_long_long;
    →printf((char*)&gvar_8048914, v1, v5, v2, v6, v0, v7, v3, v8, v4, v9);
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
    return →printf((char*)&gvar_8048914, param0, param1, v0, v1, v2, v3);
}

int use_int(int param0) {
    int v0;
    int v1;
    int v2;
    int v3;
    int v4;
    return →printf((char*)&gvar_8048917, param0, v0, v1, v2, v3, v4);
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
    v1 = fldcw(v1);
    fist();
    v0 = fldcw(v0);
    global_char = (unsigned char)v2;
    global_short = v2;
    v1 = fldcw(v1);
    fistp();
    v0 = fldcw(v0);
    global_int = v3;
    global_long = v3;
    return 121;
}

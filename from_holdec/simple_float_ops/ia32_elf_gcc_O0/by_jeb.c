
int basic_operations(int param0, int param1, int param2, int param3) {
    int v0;
    int v1;
    int v2 = param0;
    int v3 = param1;
    int v4 = param2;
    int v5 = param3;
    *(long long*)&v0 = *(double*)&v2 + *(double*)&v4;
    use(v0, v1);
    *(long long*)&v0 = *(double*)&v2 - *(double*)&v4;
    use(v0, v1);
    *(long long*)&v0 = *(double*)&v4 - *(double*)&v2;
    use(v0, v1);
    *(long long*)&v0 = *(double*)&v2 * *(double*)&v4;
    use(v0, v1);
    *(long long*)&v0 = *(double*)&v2 / *(double*)&v4;
    use(v0, v1);
    *(long long*)&v0 = *(double*)&v4 / *(double*)&v2;
    use(v0, v1);
    fchs();
    *(long long*)&v0 = *(double*)&v2;
    use(v0, v1);
    return 123;
}

int compare_floats(int param0, int param1, int param2, int param3) {
    int v0;
    int v1;
    int v2 = param0;
    int v3 = param1;
    int v4 = param2;
    int v5 = param3;
    v6[v7] = fucomip(*(double*)&v4, *(double*)&v2);
    v6[v7] = fucomip(*(double*)&v4, *(double*)&v2);
    use_int(&v0 == 28 ? __parity__((unsigned char)&v4) ? 0: 1: 0);
    v6[v7] = fucomip(*(double*)&v4, *(double*)&v2);
    v6[v7] = fucomip(*(double*)&v4, *(double*)&v2);
    use_int(&v0 == 28 ? __parity__((unsigned char)&v4) ? 1: 0: 1);
    v6[v7] = fucomip(*(double*)&v4, *(double*)&v2);
    use_int((unsigned int)&v1 >= 0xfffffff0 || &v0 == 28 ? 0: 1);
    v6[v7] = fucomip(*(double*)&v4, *(double*)&v2);
    use_int((unsigned int)&v1 >= 0xfffffff0 ? 0: 1);
    v6[v7] = fucomip(*(double*)&v2, *(double*)&v4);
    use_int((unsigned int)&v1 >= 0xfffffff0 || &v0 == 28 ? 0: 1);
    v6[v7] = fucomip(*(double*)&v2, *(double*)&v4);
    use_int((unsigned int)&v1 >= 0xfffffff0 ? 0: 1);
    return 124;
}

int constants(int param0, int param1) {
    int v0;
    int v1;
    int v2 = param0;
    int v3 = param1;
    __SyntheticTypeUnknownF v4 = *(double*)&v2;
    *(long long*)&v0 = v4 + v4;
    use(v0, v1);
    *(long long*)&v0 = *(double*)&v2 * 3.0;
    use(v0, v1);
    *(long long*)&v0 = *(double*)&v2 * 3.141592653589793;
    use(v0, v1);
    *(long long*)&v0 = *(double*)&v2 * 10.0;
    use(v0, v1);
    *(long long*)&v0 = *(double*)&v2 * 12.345;
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
    →printf("%zu %zu %zu\n", 4, 8, 12);
    return 0;
}

int read_floats() {
    int v0;
    int v1;
    __SyntheticTypeUnknownF v2;
    fldz();
    *(long long*)&v0 = v2;
    *(long long*)&v0 = global_float + *(double*)&v0;
    *(long long*)&v0 = global_double + *(double*)&v0;
    *(long long*)&v0 = *(double*)&v0 + *(__int128*)&global_long_double;
    use(v0, v1);
    return 122;
}

int read_ints() {
    int v0;
    int v1;
    int v2;
    __SyntheticTypeUnknownF v3;
    fldz();
    *(long long*)&v0 = v3;
    v1 & 0xFFFF = (short)global_char;
    *(long long*)&v0 = (double)(unsigned short)v1 + *(double*)&v0;
    (unsigned short)v1 = global_short;
    *(long long*)&v0 = (double)(unsigned short)v1 + *(double*)&v0;
    *(long long*)&v0 = (double)global_int + *(double*)&v0;
    *(long long*)&v0 = (double)global_long + *(double*)&v0;
    int v4 = *(int*)((char*)&global_long_long + 4);
    v1 = *(int*)&global_long_long;
    int v5 = v4;
    double v6 = (double)*(long long*)&v1;
    *(long long*)&v0 = (double)*(long long*)&v1 + *(double*)&v0;
    use(v0, v2);
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
    return →printf((char*)&gvar_80489C8, param0, param1, v0);
}

int use_int(int param0) {
    int v0;
    int v1;
    return →printf((char*)&gvar_80489CB, param0, v0, v1);
}

int write_floats(int param0, int param1) {
    int v0 = param0;
    int v1 = param1;
    float v2 = *(double*)&v0;
    global_float = v2;
    global_double = *(double*)&v0;
    *(__int128*)&global_long_double = *(double*)&v0;
    return param1;
}

int write_ints(int param0, int param1) {
    short v0;
    short v1;
    unsigned short v2;
    unsigned int v3;
    int v4;
    int v5;
    v0 = fnstcw(v0);
    short v1 = fldcw((unsigned short)(unsigned char)v0 | ((unsigned short)12 << 8));
    fistp();
    v0 = fldcw(v0);
    global_char = (unsigned char)v2;
    v1 = fldcw(v1);
    fistp();
    v0 = fldcw(v0);
    global_short = v2;
    v1 = fldcw(v1);
    fistp();
    v0 = fldcw(v0);
    global_int = v3;
    v1 = fldcw(v1);
    fistp();
    v0 = fldcw(v0);
    global_long = v3;
    v1 = fldcw(v1);
    fistp();
    v0 = fldcw(v0);
    global_long_long = (unsigned long long)v4 | ((unsigned long long)v5 << 32);
    return 121;
}

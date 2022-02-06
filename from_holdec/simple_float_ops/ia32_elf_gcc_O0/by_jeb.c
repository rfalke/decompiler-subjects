
int basic_operations(int param0, int param1, int param2, int param3) {
    int v0;
    int v1;
    __SyntheticTypeUnknownF v2;
    int v3 = param0;
    int v4 = param1;
    int v5 = param2;
    int v6 = param3;
    *(long long*)&v0 = *(double*)&v3 + *(double*)&v5;
    use(v0, v1);
    *(long long*)&v0 = *(double*)&v3 - *(double*)&v5;
    use(v0, v1);
    *(long long*)&v0 = *(double*)&v5 - *(double*)&v3;
    use(v0, v1);
    *(long long*)&v0 = *(double*)&v3 * *(double*)&v5;
    use(v0, v1);
    *(long long*)&v0 = *(double*)&v3 / *(double*)&v5;
    use(v0, v1);
    *(long long*)&v0 = *(double*)&v5 / *(double*)&v3;
    use(v0, v1);
    v7[v8] = fchs(*(double*)&v3);
    *(long long*)&v0 = v2;
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
    fucomip(*(double*)&v4, *(double*)&v2);
    fucomip(*(double*)&v4, *(double*)&v2);
    int v6 = use_int(&v0 == 28 ? __parity__((unsigned char)&v0 - 28) ? 0: 1: 0);
    fucomip(*(double*)&v4, *(double*)&v2);
    fucomip(*(double*)&v4, *(double*)&v2);
    int v7 = use_int(&v0 == 28 ? __parity__((unsigned char)&v0 - 28) ? 1: 0: 1);
    fucomip(*(double*)&v4, *(double*)&v2);
    int v8 = use_int((unsigned int)&v1 >= 0xfffffff0 || &v0 == 28 ? 0: 1);
    fucomip(*(double*)&v4, *(double*)&v2);
    int v9 = use_int((unsigned int)&v1 >= 0xfffffff0 ? 0: 1);
    fucomip(*(double*)&v2, *(double*)&v4);
    int v10 = use_int((unsigned int)&v1 >= 0xfffffff0 || &v0 == 28 ? 0: 1);
    fucomip(*(double*)&v2, *(double*)&v4);
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
    →printf("%zu %zu %zu %zu %zu\n");
    →printf("%zu %zu %zu\n");
    return 0;
}

int read_floats() {
    int v0;
    int v1;
    *(long long*)&v0 = 0.0;
    *(long long*)&v0 = global_float + *(double*)&v0;
    *(long long*)&v0 = global_double + *(double*)&v0;
    *(long long*)&v0 = *(double*)&v0 + *(__int128*)&global_long_double;
    use(v0, v1);
    return 122;
}

int read_ints() {
    int v0;
    short v1;
    int v2;
    *(long long*)&v0 = 0.0;
    *(long long*)&v0 = (double)(short)global_char + *(double*)&v0;
    *(long long*)&v0 = (double)global_short + *(double*)&v0;
    *(unsigned int*)&v1 = global_int;
    *(long long*)&v0 = (double)*(int*)&v1 + *(double*)&v0;
    *(unsigned int*)&v1 = global_long;
    *(long long*)&v0 = (double)*(int*)&v1 + *(double*)&v0;
    int v3 = *(int*)((char*)&global_long_long + 4);
    *(int*)&v1 = *(int*)&global_long_long;
    int v4 = v3;
    *(long long*)&v0 = (double)*(long long*)&v1 + *(double*)&v0;
    use(v0, v2);
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

int use(int param0, int param1) {
    int result;
    →printf(&gvar_80489C8);
    return result;
}

int use_int(int param0) {
    int result;
    →printf(&gvar_80489CB);
    return result;
}

int write_floats(int param0, int param1) {
    int v0 = param0;
    int v1 = param1;
    global_float = *(double*)&v0;
    global_double = *(double*)&v0;
    *(__int128*)&global_long_double = *(double*)&v0;
    return param1;
}

int write_ints(int param0, int param1) {
    short v0;
    int v1;
    int v2;
    int v3 = param0;
    int v4 = param1;
    short v0 = fnstcw();
    fldcw((unsigned short)(unsigned char)v0 | ((unsigned short)12 << 8));
    fldcw(v0);
    global_char = (unsigned char)(short)*(double*)&v3;
    fldcw((unsigned short)(unsigned char)v0 | ((unsigned short)12 << 8));
    fldcw(v0);
    global_short = (short)*(double*)&v3;
    fldcw((unsigned short)(unsigned char)v0 | ((unsigned short)12 << 8));
    fldcw(v0);
    global_int = (int)*(double*)&v3;
    fldcw((unsigned short)(unsigned char)v0 | ((unsigned short)12 << 8));
    fldcw(v0);
    global_long = (int)*(double*)&v3;
    fldcw((unsigned short)(unsigned char)v0 | ((unsigned short)12 << 8));
    *(long long*)&v1 = (long long)*(double*)&v3;
    fldcw(v0);
    global_long_long = (unsigned long long)v1 | ((unsigned long long)v2 << 32);
    return 121;
}

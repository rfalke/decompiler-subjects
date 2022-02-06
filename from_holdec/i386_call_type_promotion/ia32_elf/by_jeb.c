
int main(int param0) {
    int v0;
    char v1;
    int v2;
    int v3;
    int v4;
    int v5;
    int v6;
    int v7 = v0;
    int* ptr0 = &param0;
    *(int*)&v1 = 97;
    float v8 = (double)param0 + 1.2300000190734863;
    *(double*)&v2 = (double)param0;
    print_char('a');
    *(int*)&v1 = 42;
    print_short(*(short*)&v1);
    *(float*)&v1 = v8;
    print_float_as_hex(*(int*)&v1);
    *(long long*)&v1 = *(double*)&v2 + 4.56;
    print_double_as_hex(*(int*)&v1, v5);
    *(__int128*)&v1 = *(double*)&v2 + 7.89;
    print_long_double_as_hex(*(__int128*)&v1, v6, v3);
    *(int*)&v1 = "dummy";
    *(long long*)&v5 = v8;
    *(long long*)&v2 = v8;
    print_varargs(*(int*)&v1, *(double*)&v5, v6);
    *(long long*)&v1 = *(double*)&v2;
    print_without_prototype(*(double*)&v1, v4);
    return 0;
}

int print_char(char param0) {
    →printf("got a char \'%c\'\n");
    return 0;
}

int print_double_as_hex(int param0, int param1) {
    →printf("got a double with      0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x\n");
    return 0;
}

int print_float_as_hex(int param0) {
    →printf("got a float with       0x%02x 0x%02x 0x%02x 0x%02x\n");
    return 0;
}

void print_long_double_as_hex() {
    // Decompilation error
}

int print_short(short param0) {
    →printf("got a short %d\n");
    return 0;
}

int print_varargs(int param0, double param1, int param2) {
    →printf("promo because of vargs: converted a float with 0x%02x 0x%02x 0x%02x 0x%02x\n");
    return 0;
}

int print_without_prototype(double param0, int param1) {
    →printf("promo because of no prototype: converted to a float with 0x%02x 0x%02x 0x%02x 0x%02x\n");
    return 0;
}

int sub_8049036() {
    return gvar_804C008();
}

void sub_8049137() {
}

int sub_804916C() {
    return 0;
}

void sub_80491B8() {
}

int sub_80491ED() {
    int result = deregister_tm_clones();
    completed.6844 = 1;
    return result;
}

void sub_8049208() {
}


int main(int param0) {
    int v0;
    int v1;
    int v2;
    int v3;
    int v4;
    int v5 = v0;
    int* ptr0 = &param0;
    int v6 = 97;
    int v7 = param0;
    int v8 = (double)v7 + 1.2300000190734863;
    *(double*)&v7 = (double)v7;
    print_char((char)v6);
    print_short(42);
    print_float_as_hex(v8);
    *(long long*)&v6 = *(double*)&v7 + 4.56;
    print_double_as_hex(v6, v3);
    *(__int128*)&v6 = *(double*)&v7 + 7.89;
    print_long_double_as_hex(*(__int128*)&v6, v4, v1);
    v6 = "dummy";
    *(long long*)&v3 = (double)v8;
    *(long long*)&v7 = (double)v8;
    print_varargs(v6, *(double*)&v3, v4);
    *(long long*)&v6 = *(double*)&v7;
    print_without_prototype(*(double*)&v6, v2);
    return 0;
}

int print_char(char param0) {
    →printf("got a char \'%c\'\n", (unsigned int)param0);
    return 0;
}

int print_double_as_hex(int param0, int param1) {
    →printf("got a double with      0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x\n", param1 >>> 24, (unsigned int)(unsigned char)(param1 >>> 16), (unsigned int)(unsigned char)(param1 >>> 8), (unsigned int)(param1 & 0xFF), param0 >>> 24, (unsigned int)(unsigned char)(param0 >>> 16), (unsigned int)(unsigned char)(param0 >>> 8), (unsigned int)(param0 & 0xFF));
    return 0;
}

void print_long_double_as_hex() {
    // Decompilation error
}

int print_short(short param0) {
    →printf("got a short %d\n", (unsigned int)param0);
    return 0;
}

int print_varargs(int param0, double param1, int param2) {
    int v0 = param1;
    →printf("promo because of vargs: converted a float with 0x%02x 0x%02x 0x%02x 0x%02x\n", v0 >>> 24, (unsigned int)(unsigned char)(v0 >>> 16), (unsigned int)(unsigned char)(v0 >>> 8), (unsigned int)(v0 & 0xFF));
    return 0;
}

int print_without_prototype(double param0, int param1) {
    int v0 = param0;
    →printf("promo because of no prototype: converted to a float with 0x%02x 0x%02x 0x%02x 0x%02x\n", v0 >>> 24, (unsigned int)(unsigned char)(v0 >>> 16), (unsigned int)(unsigned char)(v0 >>> 8), (unsigned int)(v0 & 0xFF));
    return 0;
}

void sub_8049030() {
    jump gvar_804C008;
}

void sub_8049137() {
}

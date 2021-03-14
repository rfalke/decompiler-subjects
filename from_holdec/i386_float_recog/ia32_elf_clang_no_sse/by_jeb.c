
int double_to_double(double param0, int param1) {
    →printf("got 2*x=%f\n", param0 + param0);
    return 0;
}

int double_to_unknown(int param0, int param1) {
    →printf("got a double with      0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x\n", param1 >>> 24, (unsigned int)(unsigned char)(param1 >>> 16), (unsigned int)(unsigned char)(param1 >>> 8), (unsigned int)(param1 & 0xFF), param0 >>> 24, (unsigned int)(unsigned char)(param0 >>> 16), (unsigned int)(unsigned char)(param0 >>> 8), (unsigned int)(param0 & 0xFF));
    return 0;
}

int main(int param0) {
    int v0;
    int v1;
    int v2;
    long long v3;
    int v4;
    unknown_to_unknown(-171798692, 1072913448);
    int v5 = param0;
    double v6 = (double)v5;
    *(long long*)&v0 = (double)v5 + 1.22;
    double_to_unknown(v0, v1);
    v1 = 1072934420;
    v0 = 0x7ae147ae;
    unknown_to_double(*(double*)&v0, v2);
    *(long long*)&v0 = v6 + 1.24;
    double_to_double(*(double*)&v0, v2);
    *(__int128*)&v3 = 2.32;
    int v7 = 1073904353;
    v2 = 0x47ae147b;
    int v8 = 102;
    →printf("unknown: int-a=%d double=%f int-b=%d long double=%Lf int-c=%d\n", 100, *(double*)&v2, 101, v3, v4);
    *(__int128*)&v3 = v6 + 2.41 + 2.42;
    *(long long*)&v2 = v6;
    v8 = 202;
    →printf("double: int-a=%d double=%f int-b=%d long double=%Lf int-c=%d\n", 200, *(double*)&v2, 201, v3, v4);
    return 0;
}

void sub_8049030() {
    jump gvar_804C008;
}

void sub_8049097() {
}

int unknown_to_double(double param0, int param1) {
    →printf("got 2*x=%f\n", param0 + param0);
    return 0;
}

int unknown_to_unknown(int param0, int param1) {
    →printf("got a double with      0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x\n", param1 >>> 24, (unsigned int)(unsigned char)(param1 >>> 16), (unsigned int)(unsigned char)(param1 >>> 8), (unsigned int)(param1 & 0xFF), param0 >>> 24, (unsigned int)(unsigned char)(param0 >>> 16), (unsigned int)(unsigned char)(param0 >>> 8), (unsigned int)(param0 & 0xFF));
    return 0;
}

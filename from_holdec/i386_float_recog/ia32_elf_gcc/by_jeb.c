
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
    int v3;
    int v4;
    int v5 = v0;
    int v6 = v4;
    int* ptr0 = &param0;
    unknown_to_unknown(-171798692, 1072913448);
    int v7 = param0;
    __SyntheticTypeUnknownF v8 = (double)v7;
    *(long long*)&v7 = v8;
    *(long long*)&v1 = v8 + 1.22;
    double_to_unknown(v1, v3);
    v3 = 1072934420;
    v1 = 0x7ae147ae;
    unknown_to_double(*(double*)&v1, v2);
    *(long long*)&v1 = *(double*)&v7 + 1.24;
    double_to_double(*(double*)&v1, v2);
    v1 = 102;
    int v9 = 0x4000;
    int v10 = -1803886265;
    int v11 = -1374390272;
    int v12 = 101;
    int v13 = 1073904353;
    int v14 = 0x47ae147b;
    →printf("unknown: int-a=%d double=%f int-b=%d long double=%Lf int-c=%d\n", 100, *(double*)&v14, 101, *(double*)&v11, 0x4000);
    __SyntheticTypeUnknownF v15 = *(double*)&v7;
    v1 = 202;
    *(__int128*)&v11 = 2.42 + v15;
    v12 = 201;
    *(long long*)&v14 = v15 + 2.41;
    →printf("double: int-a=%d double=%f int-b=%d long double=%Lf int-c=%d\n", 200, *(double*)&v14, v12, *(double*)&v11, v9);
    return 0;
}

void sub_8049030() {
    jump gvar_804C008;
}

void sub_8049177() {
}

int unknown_to_double(double param0, int param1) {
    →printf("got 2*x=%f\n", param0 + param0);
    return 0;
}

int unknown_to_unknown(int param0, int param1) {
    →printf("got a double with      0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x\n", param1 >>> 24, (unsigned int)(unsigned char)(param1 >>> 16), (unsigned int)(unsigned char)(param1 >>> 8), (unsigned int)(param1 & 0xFF), param0 >>> 24, (unsigned int)(unsigned char)(param0 >>> 16), (unsigned int)(unsigned char)(param0 >>> 8), (unsigned int)(param0 & 0xFF));
    return 0;
}

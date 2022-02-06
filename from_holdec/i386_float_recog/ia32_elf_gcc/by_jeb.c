
int double_to_double(double param0, int param1) {
    →printf("got 2*x=%f\n");
    return 0;
}

int double_to_unknown(int param0, int param1) {
    →printf("got a double with      0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x\n");
    return 0;
}

int main(int param0) {
    int v0;
    int v1;
    int v2;
    int v3;
    int v4;
    int v5;
    int v6;
    int v7;
    int v8 = v0;
    int v9 = v7;
    int* ptr0 = &param0;
    unknown_to_unknown(-171798692, 1072913448);
    *(double*)&v1 = (double)param0;
    *(long long*)&v2 = (double)param0 + 1.22;
    double_to_unknown(v2, v5);
    v5 = 1072934420;
    v2 = 0x7ae147ae;
    unknown_to_double(*(double*)&v2, v3);
    *(long long*)&v2 = *(double*)&v1 + 1.24;
    double_to_double(*(double*)&v2, v3);
    →printf("unknown: int-a=%d double=%f int-b=%d long double=%Lf int-c=%d\n");
    __SyntheticTypeUnknownF v10 = *(double*)&v1;
    *(__int128*)&v6 = 2.42 + v10;
    *(long long*)&v4 = v10 + 2.41;
    →printf("double: int-a=%d double=%f int-b=%d long double=%Lf int-c=%d\n");
    return 0;
}

int sub_8049036() {
    return gvar_804C008();
}

void sub_8049177() {
}

int sub_80491AC() {
    return 0;
}

void sub_80491F8() {
}

int sub_804922D() {
    int result = deregister_tm_clones();
    completed.6844 = 1;
    return result;
}

void sub_8049248() {
}

int unknown_to_double(double param0, int param1) {
    →printf("got 2*x=%f\n");
    return 0;
}

int unknown_to_unknown(int param0, int param1) {
    →printf("got a double with      0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x\n");
    return 0;
}

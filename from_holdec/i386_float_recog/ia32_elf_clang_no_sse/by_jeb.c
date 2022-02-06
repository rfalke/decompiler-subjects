
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
    __SyntheticTypeUnknownF v3;
    unknown_to_unknown(-171798692, 1072913448);
    int v4 = param0;
    double v5 = (double)param0;
    *(long long*)&v0 = (double)param0 + 1.22;
    double_to_unknown(v0, v1);
    v1 = 1072934420;
    v0 = 0x7ae147ae;
    unknown_to_double(*(double*)&v0, v2);
    *(long long*)&v0 = v5 + 1.24;
    double_to_double(*(double*)&v0, v2);
    *(int*)((char*)&v3 + 12) = 102;
    →printf("unknown: int-a=%d double=%f int-b=%d long double=%Lf int-c=%d\n");
    *(long long*)&v2 = v5;
    *(int*)((char*)&v3 + 12) = 202;
    →printf("double: int-a=%d double=%f int-b=%d long double=%Lf int-c=%d\n");
    return 0;
}

int sub_8049036() {
    return gvar_804C008();
}

void sub_8049097() {
}

int sub_80490CC() {
    return 0;
}

void sub_8049118() {
}

int sub_804914D() {
    int result = deregister_tm_clones();
    completed.6844 = 1;
    return result;
}

void sub_8049168() {
}

int unknown_to_double(double param0, int param1) {
    →printf("got 2*x=%f\n");
    return 0;
}

int unknown_to_unknown(int param0, int param1) {
    →printf("got a double with      0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x\n");
    return 0;
}

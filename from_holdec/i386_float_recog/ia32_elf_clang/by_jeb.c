
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
    __int128 v3;
    unknown_to_unknown(-171798692, 1072913448);
    double v4 = (double)param0;
    *(double*)&v0 = (double)(1.22 + (double)param0);
    double_to_unknown(v0, v1);
    v1 = 1072934420;
    v0 = 0x7ae147ae;
    unknown_to_double(*(double*)&v0, v2);
    *(double*)&v0 = (double)(1.24 + v4);
    double_to_double(*(double*)&v0, v2);
    *(int*)((char*)&v3 + 12) = 102;
    →printf("unknown: int-a=%d double=%f int-b=%d long double=%Lf int-c=%d\n");
    *(double*)&v2 = (double)(2.41 + v4);
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

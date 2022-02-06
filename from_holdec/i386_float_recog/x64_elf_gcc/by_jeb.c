
long double_to_double() {
    →printf("got 2*x=%f\n");
    return 0L;
}

long double_to_unknown() {
    →printf("got a double with      0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x\n");
    return 0L;
}

long main(int param0) {
    double v0;
    char v1;
    unknown_to_unknown();
    double_to_unknown();
    unknown_to_double();
    double_to_double();
    *(__int128*)&v0 = 2.32;
    →printf("unknown: int-a=%d double=%f int-b=%d long double=%Lf int-c=%d\n");
    *(__int128*)&v1 = (double)param0 + 2.42;
    →printf("double: int-a=%d double=%f int-b=%d long double=%Lf int-c=%d\n");
    return 0L;
}

long sub_40117D() {
    return 0L;
}

long sub_4011BF() {
    return 0L;
}

long sub_4011ED() {
    long result = deregister_tm_clones();
    completed.7287 = 1;
    return result;
}

void sub_401200() {
}

long unknown_to_double() {
    →printf("got 2*x=%f\n");
    return 0L;
}

long unknown_to_unknown() {
    →printf("got a double with      0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x\n");
    return 0L;
}

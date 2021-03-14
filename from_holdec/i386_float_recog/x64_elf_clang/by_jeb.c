
long double_to_double() {
    __int128 v0;
    →printf("got 2*x=%f\n", v0);
    return 0L;
}

long double_to_unknown() {
    __int128 v0;
    →printf("got a double with      0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x\n", (unsigned long)v0 >>> 56, (unsigned long)(unsigned char)(v0 >>> 0x30X), (unsigned long)(unsigned char)(v0 >>> 0x28X), (unsigned long)(unsigned char)(v0 >>> 0x20X), (unsigned long)((unsigned int)v0 >>> 24), (unsigned long)(unsigned char)(v0 >>> 0x10X), (unsigned long)(unsigned char)((unsigned long)v0 >>> 8L), (unsigned long)v0 & 0xffL);
    return 0L;
}

long main(long param0) {
    __int128 v0;
    __int128 v1;
    long v2;
    unknown_to_unknown();
    double_to_unknown();
    unknown_to_double();
    double_to_double();
    →printf("unknown: int-a=%d double=%f int-b=%d long double=%Lf int-c=%d\n", 100L, v0, 102L, v1, v2);
    →printf("double: int-a=%d double=%f int-b=%d long double=%Lf int-c=%d\n", 200L, v0, 202L, v1, v2);
    return 0L;
}

long unknown_to_double() {
    __int128 v0;
    →printf("got 2*x=%f\n", v0);
    return 0L;
}

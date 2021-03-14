
long double_to_double() {
    __int128 v0;
    →printf("got 2*x=%f\n", v0);
    return 0L;
}

long double_to_unknown() {
    __int128 v0;
    →printf("got a double with      0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x\n", (unsigned long)v0 >>> 56, (unsigned long)(unsigned char)(v0 >>> 0x30X), (unsigned long)(unsigned char)(v0 >>> 0x28X), (unsigned long)(unsigned char)(v0 >>> 0x20X), (unsigned long)((unsigned int)v0 >>> 24), (unsigned long)(unsigned char)(v0 >>> 0x10X), (unsigned long)(unsigned char)(v0 >>> 0x8X), (unsigned long)v0 & 0xffL);
    return 0L;
}

long main(int param0) {
    double v0;
    char v1;
    __int128 v2;
    __int128 v3;
    long v4;
    unknown_to_unknown();
    double_to_unknown();
    unknown_to_double();
    double v5 = (double)param0;
    double_to_double();
    *(__int128*)&v0 = 2.32;
    →printf("unknown: int-a=%d double=%f int-b=%d long double=%Lf int-c=%d\n", 100L, v2, 102L, v3, v4);
    *&v1 = v5 + 2.42;
    →printf("double: int-a=%d double=%f int-b=%d long double=%Lf int-c=%d\n", 200L, v2, 202L, v3, v4);
    return 0L;
}

long unknown_to_double() {
    __int128 v0;
    →printf("got 2*x=%f\n", v0);
    return 0L;
}

long unknown_to_unknown() {
    __int128 v0;
    →printf("got a double with      0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x\n", (unsigned long)v0 >>> 56, (unsigned long)(unsigned char)(v0 >>> 0x30X), (unsigned long)(unsigned char)(v0 >>> 0x28X), (unsigned long)(unsigned char)(v0 >>> 0x20X), (unsigned long)((unsigned int)v0 >>> 24), (unsigned long)(unsigned char)(v0 >>> 0x10X), (unsigned long)(unsigned char)(v0 >>> 0x8X), (unsigned long)v0 & 0xffL);
    return 0L;
}

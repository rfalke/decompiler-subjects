
long f(long param0, long param1, long param2) {
    return param1;
}

long g(long param0) {
    return f(param0 & 0xff00000000000000L, 0L, 0L);
}

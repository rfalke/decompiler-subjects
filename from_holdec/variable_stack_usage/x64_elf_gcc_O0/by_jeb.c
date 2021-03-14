
void* fill(void* __s, int param1) {
    return →memset(__s, 120, (size_t)((long)param1 * 4L));
}

long main(int param0, long param1) {
    with_alloca((long)param0);
    with_array((long)param0);
    return 0L;
}

unsigned int use(int* param0) {
    unsigned int result = sum + *param0;
    sum += *param0;
    return result;
}

unsigned int with_alloca(int param0) {
    char v0;
    int v1 = param0;
    int v2 = 7;
    void* __s = (void*)((long)(long*)((long)&v0 >>> 4) * 16L);
    int v3 = 8;
    fill(__s, (long)v1);
    use(&v2);
    use((int*)__s);
    return use(&v3);
}

unsigned int with_array(int param0) {
    char v0;
    int v1 = param0;
    int v2 = 7;
    long v3 = (long)v1 - 1L;
    void* __s = (void*)((long)(long*)((long)&v0 >>> 2) * 4L);
    int v4 = 8;
    fill(__s, (long)v1);
    use(&v2);
    use((int*)__s);
    return use(&v4);
}

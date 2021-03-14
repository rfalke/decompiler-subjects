
void* fill(void* __s, long param1) {
    return →memset(__s, 120, (size_t)((long)(unsigned int)param1 * 4L));
}

long main(long param0) {
    with_alloca(param0);
    with_array((long)(unsigned int)param0);
    return 0L;
}

int use(int* param0) {
    int result = *param0;
    sum += result;
    return result;
}

int with_alloca(int param0) {
    long v0;
    void* __s = (void*)((long)&v0 - (((long)param0 * 4L + 15L) & 0xfffffffffffffff0L));
    fill(__s, (long)param0);
    use(&v0);
    use((int*)__s);
    return use(&v0 + 1);
}

int with_array(int param0) {
    char v0;
    int v1;
    int v2;
    void* __s = (void*)((long)&v0 - (((unsigned long)param0 * 4L + 15L) & 0x7fffffff0L));
    fill(__s, (long)param0);
    use(&v1);
    use((int*)__s);
    return use(&v2);
}


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
    void* __s = (void*)((long)&v0 - (((long)v1 * 4L + 15L) & 0xfffffffffffffff0L));
    int v3 = 8;
    fill(__s, (long)v1);
    use(&v2);
    use((int*)__s);
    return use(&v3);
}

void* with_array(int param0) {
    int* ptr0;
    int v0 = param0;
    int v1 = 7;
    void* result = &ptr0;
    int v2 = 8;
    ptr0 = (int*)&ptr0;
    fill(&ptr0, (long)v0);
    use(&v1);
    use(ptr0);
    use(&v2);
    return result;
}

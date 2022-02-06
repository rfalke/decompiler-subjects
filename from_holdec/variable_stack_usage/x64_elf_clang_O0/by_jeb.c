
void* fill(void* __s, int param1) {
    return →memset(__s, 120L, (size_t)((long)param1 * 4L));
}

long main(int param0, long param1) {
    with_alloca((long)param0);
    with_array((long)param0);
    return 0L;
}

long sub_4004B9() {
    long v0;
    long v1 = v0;
    deregister_tm_clones();
    completed.6917 = 1;
}

void sub_4004CA() {
}

long sub_4004E0() {
    return register_tm_clones();
}

unsigned int use(int* param0) {
    unsigned int result = sum + *param0;
    sum += *param0;
    return result;
}

unsigned int with_alloca(int param0) {
    char v0;
    int v1 = 7;
    void* __s = &v0;
    int v2 = 8;
    fill(__s, (long)param0);
    use(&v1);
    use((int*)__s);
    return use(&v2);
}

void* with_array(int param0) {
    void* ptr0;
    int v0 = 7;
    void* result = &ptr0;
    int v1 = 8;
    ptr0 = &ptr0;
    fill(&ptr0, (long)param0);
    use(&v0);
    use((int*)ptr0);
    use(&v1);
    return result;
}

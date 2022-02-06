
void* fill(void* __s, int param1) {
    return →memset(__s, 120L, (size_t)((long)param1 * 4L));
}

long main(long param0) {
    with_alloca(param0);
    with_array((long)(unsigned int)param0);
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

int use(int* param0) {
    int result = *param0;
    sum += result;
    return result;
}

int with_alloca(int param0) {
    long v0;
    long v1 = v0;
    int v2 = 7;
    int v3 = 8;
    fill((void*)((long)(long*)((char*)&v2 + 3L) & 0xfffffffffffffff0L), (long)param0);
    use(&v2);
    use((int*)((long)(long*)((char*)&v2 + 3L) & 0xfffffffffffffff0L));
    return use(&v3);
}

int with_array(int param0) {
    char v0;
    long v1;
    long v2 = v1;
    int v3 = 7;
    int v4 = 8;
    fill(&v0, (long)param0);
    use(&v3);
    use((int*)&v0);
    return use(&v4);
}

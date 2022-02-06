
void* fill(void* __s, int param1) {
    return →memset(__s, 120L, (size_t)((long)param1 * 4L));
}

long main(long param0) {
    with_alloca(param0);
    with_array((long)(unsigned int)param0);
    return 0L;
}

long sub_4004D9() {
    long v0;
    long v1 = v0;
    deregister_tm_clones();
    completed.6917 = 1;
}

void sub_4004EA() {
}

long sub_400500() {
    return register_tm_clones();
}

int use(int* param0) {
    int result = *param0;
    sum += result;
    return result;
}

long with_alloca(int param0) {
    long v0;
    void* ptr0 = →memset((void*)((long)(long*)((char*)&v0 + 7L) & 0xfffffffffffffff0L), 120L, (size_t)((long)param0 * 4L));
    long v1 = (unsigned long)sum;
    long v2 = (unsigned long)*(int*)ptr0;
    sum = (unsigned int)((unsigned int)v2 + (unsigned int)v1 + 15);
    return (unsigned long)((unsigned int)v2 + (unsigned int)v1 + 15);
}

long with_array(int param0) {
    char v0;
    long v1;
    long v2 = v1;
    →memset((void*)((long)(long*)((long)&v0 >>> 2) * 4L), 120L, (size_t)((long)param0 * 4L));
    long v3 = (unsigned long)*(int*)((long)(long*)((long)&v0 >>> 2) * 4L);
    long v4 = (unsigned long)sum;
    sum = (unsigned int)((unsigned int)v3 + (unsigned int)v4 + 15);
    return (unsigned long)((unsigned int)v3 + (unsigned int)v4 + 15);
}

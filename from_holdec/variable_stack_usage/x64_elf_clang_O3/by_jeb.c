
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

long with_alloca(int param0) {
    int v0;
    long v1;
    long v2;
    long v3 = v1;
    *(long*)&v0 = v2;
    *(long*)&v0 = &loc_4005C3;
    /*BAD_CALL!*/ →memset((void*)((long)&v0 - (unsigned long)(((long)param0 * 4L + 15L) & 0xfffffffffffffff0L)), 120L, (size_t)((long)param0 * 4L));
    long v4 = (unsigned long)sum;
    long v5 = (unsigned long)*(int*)((long)&v0 - (unsigned long)(((long)param0 * 4L + 15L) & 0xfffffffffffffff0L));
    sum = (unsigned int)((unsigned int)v4 + (unsigned int)v5 + 15);
    return (unsigned long)((unsigned int)v4 + (unsigned int)v5 + 15);
}

long with_array(int param0) {
    int v0;
    long v1;
    long v2;
    long v3 = v1;
    *(long*)&v0 = v2;
    *(long*)&v0 = &loc_400571;
    /*BAD_CALL!*/ →memset((void*)((long)&v0 - (unsigned long)(((unsigned long)param0 * 4L + 15L) & 0x7fffffff0L)), 120L, (size_t)((long)param0 * 4L));
    long v4 = (unsigned long)sum;
    long v5 = (unsigned long)*(int*)((long)&v0 - (unsigned long)(((unsigned long)param0 * 4L + 15L) & 0x7fffffff0L));
    sum = (unsigned int)((unsigned int)v4 + (unsigned int)v5 + 15);
    return (unsigned long)((unsigned int)v4 + (unsigned int)v5 + 15);
}

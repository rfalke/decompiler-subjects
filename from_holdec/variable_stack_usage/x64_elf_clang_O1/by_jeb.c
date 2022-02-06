
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
    int v0;
    int v1;
    long v2;
    int v3;
    long v4 = v2;
    *(long*)&v0 = v3;
    void* __s = (void*)((long)&v0 - (unsigned long)(((long)param0 * 4L + 15L) & 0xfffffffffffffff0L));
    *(long*)&v0 = &loc_4005D4;
    /*BAD_CALL!*/ fill(__s, (long)param0);
    *(long*)&v0 = &loc_4005DD;
    /*BAD_CALL!*/ use(&v0);
    *(long*)&v0 = &loc_4005E5;
    /*BAD_CALL!*/ use((int*)__s);
    *(long*)&v0 = &loc_4005EE;
    return /*BAD_CALL!*/ use(&v1);
}

int with_array(int param0) {
    void* ptr0;
    long v0;
    long v1;
    long v2 = v1;
    long v3 = v0;
    int v4 = 7;
    void* __s = (void*)((long)&ptr0 - (unsigned long)(((unsigned long)param0 * 4L + 15L) & 0x7fffffff0L));
    int v5 = 8;
    fill(__s, (long)param0);
    use(&v4);
    use((int*)__s);
    return use(&v5);
}

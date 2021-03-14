
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

unsigned int with_alloca(int param0) {
    long v0;
    void* ptr0 = →memset((void*)((long)(long*)((char*)&v0 + 7L) & 0xfffffffffffffff0L), 120, (size_t)((long)param0 * 4L));
    unsigned int result = (unsigned int)(sum + *(int*)ptr0 + 15);
    sum = (unsigned int)(sum + *(int*)ptr0 + 15);
    return result;
}

unsigned int with_array(int param0) {
    long v0;
    →memset((void*)((long)(long*)((long)(long*)((char*)&v0 + 3L) >>> 2) * 4L), 120, (size_t)((long)param0 * 4L));
    unsigned int result = (unsigned int)(*(int*)((long)(long*)((long)(long*)((char*)&v0 + 3L) >>> 2) * 4L) + sum + 15);
    sum = (unsigned int)(*(int*)((long)(long*)((long)(long*)((char*)&v0 + 3L) >>> 2) * 4L) + sum + 15);
    return result;
}

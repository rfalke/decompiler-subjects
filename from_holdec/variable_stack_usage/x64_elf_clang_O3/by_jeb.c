
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
    long v1 = ((long)param0 * 4L + 15L) & 0xfffffffffffffff0L;
    →memset((void*)((long)&v0 - (((long)param0 * 4L + 15L) & 0xfffffffffffffff0L)), 120, (size_t)((long)param0 * 4L));
    unsigned int result = (unsigned int)(*(int*)((long)&v0 - (((long)param0 * 4L + 15L) & 0xfffffffffffffff0L)) + sum + 15);
    sum = (unsigned int)(*(int*)((long)&v0 - (((long)param0 * 4L + 15L) & 0xfffffffffffffff0L)) + sum + 15);
    return result;
}

unsigned int with_array(long param0) {
    long v0;
    →memset((void*)((long)&v0 - (((param0 & 0xffffffffL) * 4L + 15L) & 0x7fffffff0L)), 120, (size_t)((long)(unsigned int)param0 * 4L));
    unsigned int result = (unsigned int)(*(int*)((long)&v0 - (((param0 & 0xffffffffL) * 4L + 15L) & 0x7fffffff0L)) + sum + 15);
    sum = (unsigned int)(*(int*)((long)&v0 - (((param0 & 0xffffffffL) * 4L + 15L) & 0x7fffffff0L)) + sum + 15);
    return result;
}

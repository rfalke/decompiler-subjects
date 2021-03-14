
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

int with_alloca(long param0) {
    long v0;
    int v1;
    int v2;
    fill((void*)((long)(long*)((char*)&v0 + 7L) & 0xfffffffffffffff0L), param0 & 0xffffffffL);
    use(&v1);
    use((int*)((long)(long*)((char*)&v0 + 7L) & 0xfffffffffffffff0L));
    return use(&v2);
}

int with_array(long param0) {
    long v0;
    int v1;
    int v2;
    fill(&v0, param0 & 0xffffffffL);
    use(&v1);
    use((int*)&v0);
    return use(&v2);
}


unsigned long* insert(unsigned long* param0, int* param1) {
    unsigned long* result;
    unsigned long* ptr0 = param0;
    int* ptr1 = param1;
    if(!*param0) {
        result = ptr0;
        *result = ptr1;
    }
    else if(**ptr0 > *ptr1) {
        long v0 = *ptr0 + 16L;
        result = (unsigned long*)insert(v0, (long)ptr1, v0);
    }
    else {
        result = (unsigned long*)**param0;
        if(**param0 < *ptr1) {
            long v1 = *ptr0 + 8L;
            result = (unsigned long*)insert(v1, (long)ptr1, v1);
        }
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long main() {
    long v0 = 0L;
    for(int i = 1; i <= 10; ++i) {
        void* ptr0 = →malloc(24L);
        *(long*)((long)ptr0 + 8L) = 0L;
        *(long*)((long)ptr0 + 16L) = *(long*)((long)ptr0 + 8L);
        int v1 = →rand();
        *(int*)ptr0 = (unsigned int)v1;
        insert(&v0, (int*)ptr0);
    }
    return printout(v0);
}

long printout(long param0) {
    long result;
    long v0 = param0;
    if(*(long*)(v0 + 16L)) {
        printout(*(long*)(v0 + 16L));
    }
    →printf((char*)&gvar_400794);
    if(*(long*)(v0 + 8L)) {
        result = printout(*(long*)(v0 + 8L));
    }
    return result;
}

void sub_400440() {
    jump gvar_600AF8;
}

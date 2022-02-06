
unsigned long* insert(unsigned long* param0, unsigned int* param1) {
    unsigned long* result;
    if(!*param0) {
        result = param0;
        *result = param1;
    }
    else if((int)**param0 > (int)*param1) {
        long v0 = *param0 + 16L;
        result = (unsigned long*)insert(v0, (long)param1, v0);
    }
    else {
        int* ptr0 = *param0;
        result = (unsigned long*)*ptr0;
        if(*ptr0 < *param1) {
            long v1 = *param0 + 8L;
            result = (unsigned long*)insert(v1, (long)param1, v1);
        }
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long main() {
    unsigned int v0;
    unsigned int* ptr0;
    long v1 = 0L;
    unsigned int v2 = 1;
    do {
        →malloc(24L);
        unsigned int* ptr1 = ptr0;
        *(long*)&ptr1[2] = 0L;
        *(long*)&ptr1[4] = 0L;
        →rand();
        ptr1[0] = v0;
        insert(&v1, ptr1);
        ++v2;
    }
    while((int)v2 <= 10);
    return printout(v1);
}

long printout(int* param0) {
    int* ptr0 = param0;
    if(*(long*)(ptr0 + 4)) {
        printout(*(long*)(ptr0 + 4));
    }
    →printf((char*)&gvar_400794);
    long result = *(long*)(ptr0 + 2);
    if(result) {
        result = printout(*(long*)(ptr0 + 2));
    }
    return result;
}

long sub_400446() {
    return gvar_600AF8();
}

long sub_400549() {
    long v0;
    long v1 = v0;
    deregister_tm_clones();
    completed.6391 = 1;
}

void sub_40055A() {
}

long sub_40056A() {
    return register_tm_clones();
}


void sub_400846() {
    jump gvar_105E010;
}

// Stale decompilation - Refresh this view to re-decompile this code
long sub_400930() {
    return &stdout;
}

long sub_4009D7(unsigned long* param0) {
    long result;
    unsigned long* ptr0 = param0;
    if(!ptr0 || !*ptr0) {
        result = 0L;
    }
    else {
        void* __ptr = *ptr0;
        *ptr0 = **ptr0;
        int v0 = *(int*)((long)__ptr + 8L);
        *(int*)((long)__ptr + 8L) = 0;
        *(long*)__ptr = 0L;
        →free(__ptr);
        result = (unsigned long)v0;
    }
    return result;
}

long sub_400A52(unsigned long* param0) {
    unsigned long* ptr0 = param0;
    unsigned long* ptr1 = *ptr0;
    unsigned long* ptr2 = NULL;
    while(ptr1) {
        unsigned long* ptr3 = *ptr1;
        *ptr1 = ptr2;
        ptr2 = ptr1;
        ptr1 = ptr3;
    }
    *ptr0 = ptr2;
    return 0L;
}

long sub_400AAE(unsigned long* param0, int param1) {
    long result;
    unsigned long* ptr0 = param0;
    int v0 = param1;
    if(!ptr0) {
        result = 0xffffffffL;
    }
    else {
        void* ptr1 = →malloc(16L);
        if(!ptr1) {
            /*NO_RETURN*/ →exit(0);
        }
        *(int*)((long)ptr1 + 8L) = v0;
        *(long*)ptr1 = *ptr0;
        *ptr0 = ptr1;
        result = 0L;
    }
    return result;
}

long sub_400B14(unsigned long* param0, long param1) {
    void* ptr0;
    long result;
    unsigned long* ptr1 = param0;
    int v0 = (unsigned int)param1;
    if(!ptr1) {
        result = 0L;
    }
    else {
        if(!*ptr1) {
            ptr0 = →malloc(16L);
            if(!ptr0) {
                /*NO_RETURN*/ →exit(0);
            }
            *(int*)((long)ptr0 + 8L) = v0;
            *(long*)ptr0 = *ptr1;
        }
        else {
            long v1 = *ptr1;
            long* ptr2 = *ptr1;
            long v2 = sub_400B14(v1, (unsigned long)v0, v1);
            *ptr2 = v2;
            ptr0 = *ptr1;
        }
        *ptr1 = ptr0;
        result = *ptr1;
    }
    return result;
}

unsigned long* sub_400BBF(unsigned long* param0) {
    unsigned long* result;
    void* ptr0;
    unsigned long* ptr1 = param0;
    if(ptr1) {
        for(void* i = *ptr1; i; i = ptr0) {
            ptr0 = *(void**)i;
            *(int*)((long)i + 8L) = 0;
            *(long*)i = 0L;
            →free(i);
        }
        result = ptr1;
        *result = 0L;
    }
    return result;
}

long sub_400C33(unsigned long* param0, int param1) {
    unsigned long* ptr0 = param0;
    int v0 = param1;
    while(*ptr0) {
        void* __ptr = *ptr0;
        if(*(int*)(*ptr0 + 8L) == v0) {
            *ptr0 = **ptr0;
            *(int*)((long)__ptr + 8L) = 0;
            *(long*)__ptr = 0L;
            →free(__ptr);
        }
        else {
            ptr0 = *ptr0;
        }
    }
    return 0L;
}

long sub_400CB5(long* param0, long param1) {
    int v0 = (unsigned int)param1;
    return param0 ? sub_400CB5(*param0, ((unsigned long)(unsigned int)param1 + 1L) & 0xffffffffL, ((unsigned long)(unsigned int)param1 + 1L) & 0xffffffffL): (unsigned long)(unsigned int)param1;
}

long sub_400CE9(long* param0) {
    return sub_400CB5(param0, 0L);
}

long sub_400D08(long* param0, int param1) {
    long* ptr0 = param0;
    int v0 = param1;
    long v1 = sub_400CE9(ptr0);
    int v2 = (unsigned int)v1 - 1;
    for(int i = 0; v2 - i != v0; ++i) {
        ptr0 = (long*)ptr0[0];
    }
    return (unsigned long)*(int*)&ptr0[1];
}

long* sub_400D55(long* param0, int param1, int param2) {
    long* result = param0;
    int v0 = param1;
    long v1 = sub_400CE9(result);
    int v2 = (unsigned int)v1 - 1;
    for(int i = 0; (unsigned int)v1 - 1 - i != v0; ++i) {
        result = (long*)result[0];
    }
    *(int*)&result[1] = param2;
    return result;
}

long sub_400DA9() {
    long v0;
    char v1;
    char v2;
    char v3;
    char v4;
    long v5;
    long v6 = v5;
    long v7 = *(long*)(__FS_BASE + (long)(long*)0x28);
    time_t v8 = →time(NULL);
    →srand((unsigned int)v8);
    char v9 = 0;
    int v10 = 0;
    long v11 = 0L;
    →memcpy(&v4, (void*)&gvar_E4DC00, 9532L);
    →memcpy(&v3, (void*)&gvar_E50140, 9532L);
    →memcpy(&v2, (void*)&gvar_E52680, 11100L);
    →memcpy(&v1, (void*)&gvar_E551E0, 11100L);
    →memcpy(&v0, (void*)&gvar_E57D40, 22200L);
    void* ptr0 = &v3;
    void* ptr1 = &v4;
    int v12 = 0;
    void* ptr2 = &v4;
    int v13 = 0;
    int v14 = *(int*)ptr2;
    void* ptr3 = ptr0;
    int v15 = v14;
    int v16 = *(int*)((long)(v14 * 1445 - (((unsigned int)(((long)(v14 * 1445) * 0x3700c083L) >>> 32L) >> 9) - ((v14 * 1445) >> 31)) * 2383) * 4L + (long)ptr0);
    void* ptr4 = &v1;
    void* ptr5 = &v2;
    int v17 = v16;
    void* ptr6 = ptr5;
    int v18 = v17;
    int v19 = *(int*)((long)(v18 * 601 - (((unsigned int)(((long)(v18 * 601) * 0x2f3bafedL) >>> 32L) >> 9) - ((v18 * 601) >> 31)) * 2775) * 4L + (long)ptr6);
    void* ptr7 = &v1;
    int v20 = v19;
    int v21 = *(int*)((long)(v20 * 469 - (((unsigned int)(((long)(v20 * 469) * 0x2f3bafedL) >>> 32L) >> 9) - ((v20 * 469) >> 31)) * 2775) * 4L + (long)ptr7);
    v26 = 1L;
    void* ptr8 = &v3;
    void* ptr9 = &v4;
    int v22 = 0;
    void* ptr10 = &v4;
    int v23 = 0;
    int v24 = *(int*)ptr10;
    void* ptr11 = &v3;
    int v25 = v24;
    jump (long)v21 + *(long*)((long)*(int*)((long)(v24 * 1445 - (((unsigned int)(((long)(v24 * 1445) * 0x3700c083L) >>> 32L) >> 9) - ((v24 * 1445) >> 31)) * 2383) * 4L + (long)&v3) * 8L + (long)&v0);
}

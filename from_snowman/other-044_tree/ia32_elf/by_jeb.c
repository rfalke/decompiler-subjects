
unsigned int* insert(unsigned int* param0, unsigned int* param1) {
    unsigned int* result;
    if(!*param0) {
        result = param0;
        *result = param1;
    }
    else if((int)**param0 > (int)*param1) {
        result = (unsigned int*)insert(*param0 + 8, (int)param1);
    }
    else {
        result = **param0;
        if((int)*param1 > (int)result) {
            result = (unsigned int*)insert(*param0 + 4, (int)param1);
        }
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int main() {
    unsigned int* ptr0;
    int v0 = 0;
    unsigned int v1 = 1;
    do {
        →malloc(12);
        unsigned int* ptr1 = ptr0;
        ptr1[1] = 0;
        ptr1[2] = 0;
        →rand();
        ptr1[0] = (unsigned int)ptr0;
        insert(&v0, ptr1);
        ++v1;
    }
    while((int)v1 <= 10);
    return printout(v0);
}

int printout(int* param0) {
    if(*(param0 + 2)) {
        printout(*(param0 + 2));
    }
    int v0 = *param0;
    →printf(&gvar_8048630);
    int result = *(param0 + 1);
    if(result) {
        result = printout(*(param0 + 1));
    }
    return result;
}

int sub_8048306() {
    return gvar_8049860();
}

int deregister_tm_clones() {
    return 3;
}

int sub_80483B0() {
    return 0;
}

void sub_80483E9() {
}

int sub_8048419() {
    int v0;
    int v1 = v0;
    deregister_tm_clones();
    completed.6007 = 1;
}

void sub_804842C() {
}

int sub_8048439() {
    return register_tm_clones();
}

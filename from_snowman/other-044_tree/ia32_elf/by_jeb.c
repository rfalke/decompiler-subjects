
unsigned int* insert(unsigned int* param0, int* param1) {
    unsigned int* result;
    if(!*param0) {
        result = param0;
        *result = param1;
    }
    else if(**param0 > *param1) {
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
    int v0 = 0;
    for(int i = 1; i <= 10; ++i) {
        int* ptr0 = (int*)→malloc(12);
        ptr0[1] = 0;
        ptr0[2] = ptr0[1];
        int v1 = →rand();
        ptr0[0] = v1;
        insert(&v0, ptr0);
    }
    return printout(v0);
}

int printout(int* param0) {
    int result;
    if(*(param0 + 2)) {
        printout(*(param0 + 2));
    }
    →printf((char*)&gvar_8048630, *param0);
    if(*(param0 + 1)) {
        result = printout(*(param0 + 1));
    }
    return result;
}

void sub_8048300() {
    jump gvar_8049860;
}

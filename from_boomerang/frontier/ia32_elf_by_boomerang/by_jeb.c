
int main(int param0) {
    if(param0 == 5) {
        do {
            int v0 = param0;
            --param0;
            if(v0 > 1) {
                int v1 = param0;
                --param0;
                if(v1 > 2) {
                    return 13;
                }
            }
        }
        while(param0 != 12 && param0 > 0);
    }
    else if((param0 == 2)) {
        while(param0 > 0) {
        }
    }
    return 13;
}

void sub_804823A() {
    jump gvar_8049568;
}

void sub_80482C6() {
}

int sub_804841A() {
    int result;
    int v0;
    int v1;
    int v2;
    do {
        *(int*)(v1 * 4 + (int)&data_start)();
        v0 = v1;
        --v1;
    }
    while(v0);
    finalizer_0(v2, 0);
    return result;
}

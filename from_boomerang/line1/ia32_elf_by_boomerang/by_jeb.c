
void __i686.get_pc_thunk.bx() {
}

char* chomp(char* __s, int __n, FILE* __stream) {
    char* __s1 = →fgets(__s, __n, __stream);
    if(__s1) {
        char* ptr0 = →strchr(__s1, 10);
        if(ptr0) {
            ptr0[0] = 0;
        }
    }
    return __s1;
}

int main(int param0, int param1) {
    int result;
    char v0;
    if(param0 <= 1) {
        result = 1;
    }
    else {
        FILE* __stream = →fopen(*(char**)(param1 + 4), (char*)&gvar_8048654);
        if(!__stream) {
            result = 1;
        }
        else {
            char* ptr0 = chomp(&v0, 0x400, __stream);
            if(ptr0) {
                →printf((char*)&gvar_8048656, &v0);
            }
            →fclose(__stream);
        }
    }
    return result;
}

void sub_8048314() {
    jump gvar_8049750;
}

int sub_804832A() {
    /*BAD_CALL!*/ sub_8048314();
}

int sub_804833A() {
    /*BAD_CALL!*/ sub_8048314();
}

int sub_804834A() {
    /*BAD_CALL!*/ sub_8048314();
}

int sub_804835A() {
    /*BAD_CALL!*/ sub_8048314();
}

int sub_804836A() {
    /*BAD_CALL!*/ sub_8048314();
}

int sub_804837A() {
    /*BAD_CALL!*/ sub_8048314();
}

void sub_804841E() {
}

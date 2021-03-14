
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
    if(param0 > 1) {
        FILE* __stream = →fopen(*(char**)(param1 + 4), (char*)&gvar_8048654);
        if(__stream) {
            char* __s = →fgets(&v0, 0x400, __stream);
            if(__s) {
                char* ptr0 = →strchr(__s, 10);
                if(ptr0) {
                    ptr0[0] = 0;
                }
                →puts(&v0);
            }
            result = →fclose(__stream);
        }
    }
    return result;
}

void sub_8048310() {
    jump gvar_804974C;
}

int sub_8048326() {
    /*BAD_CALL!*/ sub_8048310();
}

int sub_8048336() {
    /*BAD_CALL!*/ sub_8048310();
}

int sub_8048346() {
    /*BAD_CALL!*/ sub_8048310();
}

int sub_8048356() {
    /*BAD_CALL!*/ sub_8048310();
}

int sub_8048366() {
    /*BAD_CALL!*/ sub_8048310();
}

int sub_8048376() {
    /*BAD_CALL!*/ sub_8048310();
}

void sub_804840E() {
}

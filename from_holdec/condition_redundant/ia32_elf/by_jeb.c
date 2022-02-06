
int main(unsigned int param0, unsigned int param1) {
    if(param1 && (param0 == 2 || param0 == 42)) {
        →puts("Should be expressed as argv!=null && (argc==2 || argc==42)");
    }
    if((param1 && param0 == 2) || (param0 == 42 && param1)) {
        →puts("Also if order is different");
    }
    return 0;
}

int sub_80482D6() {
    return gvar_804A008();
}

int sub_8048300() {
    return __gmon_start__();
}

int sub_804835F() {
    return 0;
}

void sub_8048398() {
}

int sub_80483C9() {
    int v0;
    int v1 = v0;
    deregister_tm_clones();
    completed.6532 = 1;
}

void sub_80483DC() {
}

int sub_80483F0() {
    return register_tm_clones();
}


int main(unsigned int param0) {
    switch(param0) {
        case 0: 
        case 1: {
            →puts("0 or 1");
            return 0;
        }
        case 2: {
            →puts(&gvar_804854B);
            return 0;
        }
        case 3: {
            →puts(&gvar_804854D);
            return 0;
        }
        case 4: {
            →puts(&gvar_804854F);
            return 0;
        }
        case 5: {
            →puts(&gvar_8048551);
            return 0;
        }
        case 7: {
            →puts(&gvar_8048553);
            return 0;
        }
        default: {
            →puts("all other cases");
            return 0;
        }
    }
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

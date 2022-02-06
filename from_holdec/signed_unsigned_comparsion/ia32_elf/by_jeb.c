
int main() {
    unsigned int v0 = 0;
    do {
        unsigned int v1 = v0;
        unsigned int v2 = v0;
        ++v0;
        int v3 = f((int)v2, (int)v1);
    }
    while(v0 != 10);
    return 0;
}

int sub_80482D6() {
    return gvar_804A008();
}

int sub_8048300() {
    return __gmon_start__();
}

int sub_804838F() {
    return 0;
}

void sub_80483C8() {
}

int sub_80483F9() {
    int v0;
    int v1 = v0;
    deregister_tm_clones();
    completed.6532 = 1;
}

void sub_804840C() {
}

int sub_8048420() {
    return register_tm_clones();
}

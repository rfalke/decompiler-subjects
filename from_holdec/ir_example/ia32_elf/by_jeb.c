
int main(unsigned int param0, int param1) {
    int v0;
    if((param0 != 2 || !**(unsigned int*)(param1 + 4))) {
        v0 = "not enough args or too small";
    }
    else if(*(char*)(*(int*)(param1 + 4) + 1) != 97) {
        v0 = "no \'a\'";
    }
    else {
        v0 = "got an \'a\'";
    }
    →puts(v0);
    return 0;
}

int sub_8049036() {
    return gvar_804C008();
}

void sub_80490E7() {
}

int sub_804911C() {
    return 0;
}

void sub_8049168() {
}

int sub_804919D() {
    int result = deregister_tm_clones();
    completed.6844 = 1;
    return result;
}

void sub_80491B8() {
}

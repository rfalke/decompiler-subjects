
int main(int param0, int param1) {
    int v0;
    int v1;
    int v2;
    int v3 = v0;
    int v4 = v2;
    int v5 = v1;
    int* ptr0 = &param0;
    if(param0 > 0) {
        int v6 = 0;
        do {
            char* __s = *(char**)(v6 * 4 + param1);
            ++v6;
            →puts(__s);
        }
        while(v6 != param0);
    }
    jump v4;
}

void sub_80482D0() {
    jump gvar_804A008;
}

void sub_8048300() {
    jump __gmon_start__;
}

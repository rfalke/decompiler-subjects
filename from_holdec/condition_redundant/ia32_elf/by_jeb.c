
int main(int param0, int param1) {
    int v0;
    if(param1 && (param0 == 2 || param0 == 42)) {
        →puts("Should be expressed as argv!=null && (argc==2 || argc==42)");
    }
    if((param1 && param0 == 2) || (param0 == 42 && param1)) {
        →puts("Also if order is different");
    }
    jump v0;
}

void sub_80482D0() {
    jump gvar_804A008;
}

void sub_8048300() {
    jump __gmon_start__;
}

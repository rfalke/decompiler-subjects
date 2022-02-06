
int do_switch(unsigned int param0) {
    if(param0 <= 999) {
        int* ptr0 = (int*)(param0 * 4 + &gvar_804B6EC);
        jump *ptr0;
    }
    else {
        result = "many";
    }
    return result;
}

int printf(char* __format, ...) {
    int result;
    return result;
}
